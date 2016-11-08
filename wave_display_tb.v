module wave_display_tb();
	 
	 reg clk, reset, valid, read_index;
	 reg [10:0] x;
	 reg [9:0] y;
	 wire [7:0] read_value;
	 wire [8:0] read_address;
	 wire valid_pixel;
	 wire [7:0] r;
	 wire [7:0] g;
	 wire [7:0] b;

	 
	 wave_display wd(
			.clk(clk),
			.reset(reset),
			

			.x(x),
			.y(y),
			.valid(valid),
			.read_value(read_value),
			.read_index(read_index),

			
			.read_address(read_address),
			.valid_pixel(valid_pixel),
			.r(r),
			.g(g),
			.b(b)
	 ); 
	  
	 fake_sample_ram fsr (
								.clk(clk),
								.addr(read_address),
								.dout(read_value)
	 ); 

    //Clock and reset
	 initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #5 clk = ~clk; 
    end
	 
	 //Tests

//{read_index, ~x[8], x[7:1]}
//	   assign memory[	 9'b000000000	] =	(8'd0);
//		assign memory[	 9'b000000001	] =	(8'd255); //8'b11111111
//		assign memory[	 9'b100000000	] =	(8'd85); //8'b01010101
//		assign memory[	 9'b111111111	] =	(8'd7); //8'b00001111

// assign valid_x = (x[10:8] == 3'b001 || x[10:8] == 3'b011);
//	
//	assign valid_y = ( (read_value < y[8:1] && y[8:1] < prev_value) || 
//				 ( prev_value < y[8:1] && y[8:1] < read_value ) &&
//				  y[9] == 0
//				  ); 
//				  
//	assign valid_pixel = valid_x && valid_y && valid;

	 initial begin
		  #5;	
		  x = 11'b00100000000; //This should correspond to memory address 9'b000000000
		  y = 10'd0; //RGB should not go high because read_address has not changed.
		  read_index = 0;
		  valid = 1;
		  
		  #100;
        x = 11'b00100000010;  //This should correspond to memory address 9'b000000001
		  y = 10'b0110010000;  //y[8:1] = 200, so RGB should go high because y[8:1] is between
									  //between current (255) and previous ram value (0)
		  #100;
		  read_index = 1;
		  x = 11'b00100000000; //This should correspond to memory address 9'b100000000
		  y = 10'b0011001000;   //y[8:1] = 100, so RGB should go high because it is between 255 and 85
		   
		  #100;
		  x = 11'b01011111110; //This should correspond to memory address 9'b111111111			
		  y = 10'b0001010000;  //y[8:1] = 40, so RGB should go high because y[8:1] is between 85 and 7
									  
	 end
endmodule 
