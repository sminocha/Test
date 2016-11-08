//-----
// Project: Lab 4: Note Player
// Module: Master Control Unit (mcu.v)
//	Engineers: Eldrick Millares, Sumit Minocha, Calvin Lin
// Description: Handles playing, pausing, and switching of songs to be played
//----

module mcu( input clk, input reset, input play_button, input next_button, input song_done,
				output play, output wire reset_player, output [1:0] song);

	reg [2:0] next_state;										// State has Play/Pause MSB, Song value in last 2 bits								
	wire [2:0] state;				
   dffr #(3) mcudff( .clk(clk), .r(reset), .d(next_state), .q(state));	// DFF Init
	
	always @(*) begin
		if(reset) next_state = 3'b000;						// Reset to Song 0, Paused
		else if(next_button) 									// Change To Next Song
			begin
			casex(state)
				3'bx00: next_state = 3'b001;												
				3'bx01: next_state = 3'b010;
				3'bx10: next_state = 3'b011;
				3'bx11: next_state = 3'b000;
				default: next_state = 3'b000;
			endcase
			end
		else if (play_button)									// Toggle Play/Pause
			begin
			casex(state)
				3'b1xx: next_state = {1'b0, state[1], state[0]};
				3'b0xx: next_state = {1'b1, state[1], state[0]};
				default: next_state = 3'b000; 
			endcase
			end
		else if (song_done)										// Switch Song, Pause after Current Song Finishes
			begin														// Not entirely sure about timing on this one!
			casex(state)
				3'bx00: next_state = 3'b001;
				3'bx01: next_state = 3'b010;
				3'bx10: next_state = 3'b011;
				3'bx11: next_state = 3'b000;
				default: next_state = 3'b000;
			endcase
			end
		else next_state = state;
	end		
	
	assign reset_player = (reset | next_button | song_done) ? 1'b1 : 1'b0;	// Signal High During Song Switch	
	assign play = (reset | song_done | next_button) ?  1'b0 : state[2];		// Play high if not resetting, paused, song done, or switching song
	assign song = (reset) ? 2'b00 : state[1:0];										// Song Value Changes during switches
endmodule
