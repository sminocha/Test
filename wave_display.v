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

	// Old address
	wire [8:0] prev_addr;
	
	// Values from rom
	wire [7:0] prev_value;
	wire [7:0] curr_value;
	
	// Peek Forward by adding 1 so that constraints are aligned
	wire [10:0] x1 = (x == 11'd1279) ? 0 : x + 11'd1;
	
	// This dffr keeps track of the address inputs.
	// If the inputs are not changing, then the read_value
	// also should not change.
	dffr # (`ADDR_WIDTH) addressdff (
								.clk(clk), 
								.r(reset),
								.d(read_address), 
								.q(prev_addr));
							
	// This dffr stores the current value taken from RAM.
	dffre # (`VALUE_WIDTH) valuedff (
								  .clk(clk), 
							     .r(reset),
								  .en(prev_addr == read_address),
							     .d(read_value),
							     .q(curr_value)); 
								  
	// Adding an extra value delay for edge case
	dffre # (`VALUE_WIDTH) delay_value (
								  .clk(clk), 
							     .r(reset),
								  .en(prev_addr == read_address),
							     .d(curr_value),
							     .q(prev_value)); 
								 
	assign read_address = (x1[9:8] == 2'b01 || x1[9:8] == 2'b10) ? {read_index, x1[9], x1[7:1]} : 0;
	
	wire valid_x = (x1[10:8] == 3'b001 || x1[10:8] == 3'b010);
	
	wire valid_y = ((((prev_value <= y[8:1]) && (y[8:1] <= curr_value)) || 
						  ((curr_value <= y[8:1]) && (y[8:1] <= prev_value)))  &&
				        (y[9] == 0)); 
				   
	assign valid_pixel = valid_x && valid_y && valid;
	
	assign {r, g, b} = (valid_pixel) ? 24'h8A2BE2 : 24'h000000;
endmodule