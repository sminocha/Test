`define ARMED 2'b00
`define ACTIVE 2'b01
`define WAIT 2'b10

module wave_capture (
    input clk,
    input reset,
    input new_sample_ready,
    input [15:0] new_sample_in,
    input wave_display_idle,

    output wire [8:0] write_address,
    output wire write_enable,
    output wire [7:0] write_sample,
    output wire read_index
);
	
	reg [1:0] next_state;
	wire [1:0] state;
	
	reg[15:0] next_sample;
	wire [15:0] sample;
	
	reg [7:0] next_count;
	wire [7:0] count;
	
	reg next_read_index;
	wire curr_read_index;

	dffr #(2) state_ff (										//ff keeping track of which state we are in (armed, active, wait)
							.clk(clk),
							.r(reset),
							.d(next_state),
							.q(state));

	dffr #(16) sample_ff (								//ff that waits to see a positive zero crossing on the audio output
							.clk(clk), 
							.r(reset), 
							.d(next_sample), 
							.q(sample));
	
	dffr #(8) sample_counter (									//once in active state, store 8 MSBs of next 256 audio samples into RAM
							.clk(clk), 
							.r(reset), 
							.d(next_count), 
							.q(count)); 
	
	dffr read_index_dff (
							.clk(clk), 
							.r(reset),
							.d(next_read_index), 
							.q(curr_read_index));
	
	always @(*) begin
		if(reset) begin
			next_state = `ARMED;
			next_sample = 0;
			next_read_index = 0;
			next_count = 0;
		end
		else begin
			case(state)
				`ARMED: begin
					next_count = 0;
					next_state = (new_sample_in[15] == 0 && sample[15] == 1) ? `ACTIVE : `ARMED;
					next_sample = new_sample_in;
					next_read_index = curr_read_index;
					end
				`ACTIVE: begin
					next_count = (new_sample_ready) ? count + 1'b1 : count;
					next_state = (count == 8'd255) ? `WAIT : `ACTIVE;
					next_sample = new_sample_in;
					next_read_index = curr_read_index;
					end
				`WAIT: begin
					next_count = count;
					next_state = (wave_display_idle) ? `ARMED : `WAIT;
					next_read_index = (wave_display_idle) ? ~curr_read_index : curr_read_index;
					next_sample = new_sample_in;
					end
				default: begin
					next_count = 0;
					next_state = 0;
					next_read_index = 0;
					next_sample = 0;
					end
			endcase
		end
	end

	assign write_sample = (state == `ACTIVE) ? sample[15:8] + 8'd128 : 1'b0;
	assign write_address = (state == `ACTIVE) ? {~read_index, count} : 1'b0;
	assign write_enable = (state == `ACTIVE) ? 1'b1 : 1'b0;			
	assign read_index = (reset) ? 1'b0 : curr_read_index;
	
endmodule


//
//	case(state)
//			`ARMED:
//			begin
//				next_count = 1'b0;
//														
//				if (new_sample_in[15] == 0 
//					&& sample[15] == 1) begin		//stay in armed state until see positive zero crossing on audio output 
//																	//how to implement w/o dffr?
//					next_state = `ACTIVE;					
//					r_i = 1'b0;									//move to outside if statement? also can't just set to 0, needs to hold from wait state (so can invert next time)
//				end
//			end
//			`ACTIVE:
//				begin
//				if (reset) begin
//					next_state = `ARMED;
//				end
//				if (curr_count == 4) begin					//once final sample is written, move to wait state 
//																	//how do I add one cycle delay here?
//				
//					next_state = `WAIT;
//				end else begin									//store 8 MSBs of the remaining samples into the RAM (in appropriate RAM location)
//					w_sam = new_sample_in[15:8];		
//					w_addr = {~r_i, curr_count};	
//					next_count = curr_count + 1'b1;		//increment counter to process next audio sample
//				end
//				end
//			`WAIT:
//			begin
//				if (reset) begin
//					next_state = `ARMED;
//				end
//				if (wave_display_idle) begin				//sit in wait state until wave_display_idle is 1, then invert r_i and switch to armed state
////					if (curr_count == 4) begin				//need this line? if I am in wait state I should already be at max curr_count
//						r_i = ~r_i;								//INFERRING LATCH?
//						next_state = `ARMED;
////					end
//				end
//				end
//		endcase
//	end 
