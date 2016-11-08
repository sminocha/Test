/*
 * A simple fake RAM that you can use to aid in debugging your wave display.
 */
module fake_sample_ram (
    input clk,
    input [8:0] addr,
    output reg [7:0] dout
);

	 wire [7:0] memory [511:0];

    always @(posedge clk)
        dout = memory[addr];
		  
		assign memory[	 0	] =	(8'd0);
		assign memory[	 1	] =	(8'd255); //8'b11111111
		assign memory[	 256	] =	(8'd85); //8'b01010101
		assign memory[	 511	] =	(8'd7); //8'b00001111
	 	
		
endmodule
