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

	wire [8:0] curr_addr = {read_index, ~x[8], x[7:1]} ;
	wire [8:0] prev_addr;
	wire [7:0] prev_value;
	
	
	
	// This dffr keeps track of the address inputs.
	// If the inputs are not changing, then the read_value
	// also should not change.
	dffr # (`ADDR_WIDTH) address_cycle (
								.clk(clk), 
								.r(reset),
								//.en(prev_addr == curr_addr),
								.d(curr_addr), 
								.q(prev_addr));
							
	// This dffr stores the current value taken from RAM.
	dffre # (`VALUE_WIDTH) delay_value (
								  .clk(clk), 
							     .r(reset),
								  .en(prev_addr == curr_addr),
							     .d(read_value),
							     .q(prev_value)); 
								 
	wire valid_x, valid_y;
								 
	assign valid_x = (x[10:8] == 3'b001 || x[10:8] == 3'b010);
	
	assign valid_y = ( ( ( (read_value < y[8:1]) && (y[8:1] < prev_value) ) || 
						  ( (prev_value < y[8:1]) && (y[8:1] < read_value) ) )  &&
				        (y[9] == 0)
				        ); 
				   
	assign valid_pixel = valid_x && valid_y && valid;
	
	assign {r, g, b} = (valid_pixel) ? 24'h8A2BE2 : 24'h000000;
	
	assign read_address = prev_addr;
	
endmodule