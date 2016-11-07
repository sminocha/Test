`define ADDR_WIDTH 9
`define VALUE_WIDTH 8

module wave_display (
    input clk,
    input reset,
    input [10:0] x,  // [0..1279]
    input [9:0]  y,  // [0..1023]
    input valid,
    input [7:0] read_value,
    input read_index,
    output wire [8:0] read_address,
    output wire valid_pixel,
    output wire [7:0] r,
    output wire [7:0] g,
    output wire [7:0] b
);

	wire [8:0] curr_addr = {read_index , x[9:1]} ;
	wire [8:0] next_addr;
	wire [8:0] read_addr;

	dffr # (`ADDR_WIDTH) (.clk(clk), 
							.r(reset), 
							.d(next_addr), 
							.q(curr_addr));
							
	wire [7:0] ram_value;							
	wire [7:0] curr_value;
	wire [7:0] next_value;

							
	ram_1w2r ram (.clkb(clk),
					  .addrb(read_addr),
				     .doutb(read_value));

				  
	dffr # (`VALUE_WIDTH) (.clk(clk), 
							     .r(reset), 
							     .d(read_value),
							     .q(next_value)); 
				  
	dffr # (`VALUE_WIDTH) (.clk(clk), 
							     .r(reset), 
							     .d(next_value), 
							     .q(curr_value));
							  
	always @(*) begin
		casex( x[9:8] )
			2'b00 : valid_pixel = 0;
			2'b01 : valid_pixel = 1;
			2'b11 : valid_pixel = 0;
			2'b10 : valid_pixel = 1;
			default: valid_pixel = 0;
		endcase
	end
	
//	always @(*) begin
//		if ( ( curr_value < y[8:1] && y[8:1] < next_value ) || 
//			( next_value < y[8:1] && y[8:1] < curr_value ) && (valid == 1))
//			begin
//			valid_pixel = 1;
//			r = 7'b1111111;
//			g = 7'b1111111;
//			b = 7'b1111111;			
//			end
//		else
//			begin
//			valid_pixel = 0;
//			r = 7'b0000000;
//			g = 7'b0000000;
//			b = 7'b0000000;
//			end
//	end

   wire [23:0] color = {r, g, b};
	assign valid_pixel = (( curr_value < y[8:1] && y[8:1] < next_value ) || 
								 ( next_value < y[8:1] && y[8:1] < curr_value ) && 
								 (valid == 1)) 
								 ? 1 : 0;
								 
	assign color = (( curr_value < y[8:1] && y[8:1] < next_value ) || 
					( next_value < y[8:1] && y[8:1] < curr_value ) && 
					(valid == 1)) 
					? 7'b1111111 : 7'b0000000;
					
	assign r = color[23:16];
	assign g = color[15:8];
	assign b = color[7:0];

	assign read_address = (curr_addr == next_addr) ? 9'd0 : next_addr;

endmodule