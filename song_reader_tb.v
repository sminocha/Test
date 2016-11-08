module song_reader_tb();

    reg clk, reset, play, note_done;
    reg [1:0] song;
    wire [5:0] note;
    wire [5:0] duration;
    wire song_done, new_note;

    song_reader dut(
        .clk(clk),
        .reset(reset),
        .play(play),
        .song(song),
        .song_done(song_done),
        .note(note),
        .duration(duration),
        .new_note(new_note),
        .note_done(note_done)
    );

    // Clock and reset
    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever begin #5 clk = ~clk;
		  end
    end

    // Tests
    initial begin
		play = 0;
		note_done = 1'b0;
		#25;
		song = 2'b00;
		play = 1;
		note_done = 1'b1;
		#10;
		note_done = 1'b0;
		#10;
		note_done = 1'b1;
		#10;
		note_done = 1'b0;
		#10;
		note_done = 1'b1;
		#10;
		note_done = 1'b0;
		#10;
		note_done = 1'b1;
		#10;
		note_done = 1'b0;
		#10;
		note_done = 1'b1;
		#10; 
		note_done = 1'b0;
		play = 0;
		#200;
		play = 1;
		#50;
		note_done = 1'b1;
		#10;
		note_done = 1'b0;
		#10;
		note_done = 1'b1;
		#10;
		note_done = 1'b0;
		#10;
		note_done = 1'b1;
	 end
endmodule