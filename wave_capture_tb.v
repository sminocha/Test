`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:25:37 11/07/2016 
// Design Name: 
// Module Name:    wave_capture_tb 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module wave_capture_tb(
    );
	 
	 reg clk, reset, new_sample_ready, wave_display_idle;
	 reg [15:0] new_sample_in;
    wire [8:0] write_address;
    wire write_enable;
    wire [7:0] write_sample;
    wire read_index;

	wave_capture dut(
						.clk(clk),
						.reset(reset),
						.new_sample_ready(new_sample_ready),
						.wave_display_idle(wave_display_idle),
						.new_sample_in(new_sample_in),
						.write_address(write_address),
						.write_enable(write_enable),
						.write_sample(write_sample),
						.read_index(read_index));

	//Clock and reset
	 initial begin
       clk = 1'b0;
       reset = 1'b1;
       repeat (4) #5 clk = ~clk;
       reset = 1'b0;
       forever #5 clk = ~clk; 
    end

	initial begin
	new_sample_ready = 0;
	new_sample_in = 0;
	wave_display_idle = 0;
	#15;
	new_sample_ready = 1;
	new_sample_in = 16'b0;
	#10;
	new_sample_ready = 0;
	#10;
	new_sample_ready = 1;
	new_sample_in = 16'b1010100000101010; 
	#10;
	new_sample_ready = 0;
	#10;
	new_sample_ready = 1;
	new_sample_in = 16'd1;
	#10;
	new_sample_ready = 0;
	#10;
	new_sample_ready = 1;
	new_sample_in = 16'd700;
	#10;
	new_sample_ready = 0;
	#10;
	new_sample_ready = 1;
	new_sample_in = 16'd2000;
	#10;
	new_sample_ready = 0;
	#10;
	new_sample_ready = 1;
	new_sample_in = 16'd13;
	#10;
	new_sample_ready = 0;
	#10;
	new_sample_ready = 1;
	new_sample_in = 16'd16;
	#10;
	new_sample_ready = 0;
	#10;
	new_sample_ready = 1;
	new_sample_in = 16'd190;
	#10;
	new_sample_ready = 0;
	#3000;
	wave_display_idle = 1;
	#10;
	wave_display_idle = 0;
	#50;
	$stop;
	end




//	 //Tests
//	 initial begin
//		new_sample_ready = 1'b0;
//		wave_display_idle = 1'b0;
//		new_sample_in = 16'b0;
//		#20;
//		new_sample_ready = 1'b1;
//		#200;
//		new_sample_in = 16'b1000000000000001;					//test that armed state doesn't switch to active until positive zero is seen
//		#10;
//		new_sample_in = 16'b1000000000000000;
//		#10;
//		new_sample_in = 16'b0000000000000000;					//positive zero is seen
//		#10;
//		new_sample_in = 16'b1111111100111111;					//instantiate samples to be stored into RAM
//		#10;
//		new_sample_in = 16'b1011111100101111;
//		#10;
//		new_sample_in = 16'b1101111100110111;					
//		#10;
//		new_sample_in = 16'b1110111100111011;					
//		#10;
//		new_sample_in = 16'b1111011100111101;					
//		#10;
//		new_sample_in = 16'b1111101100111110;					
//		#10;
//		#30;																//read_index shouldn't flip (state should not switch to armed) until wave_display_idle = 1
//		wave_display_idle = 1'b1;
//		
//		
//		//also need to test reset function
//		
//		new_sample_in = 16'b1101111100000000;					
//		#10;
//		new_sample_in = 16'b1101111100000000;					
//		#10;
//		new_sample_in = 16'b1101111100000000;					
//		#10;
//		new_sample_in = 16'b1101111100000000;					
//		#10;
//		new_sample_in = 16'b1101111100000000;					
//		#10;
//		
//		//print out MSBs of values? or just use write_sample output waveform 
//		
//		
//		//display state 
//		//change count so don't have to go all the way up to 256 samples
//	 end


endmodule
