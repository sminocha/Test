module note_player_tb();

    reg clk, reset, play_enable, generate_next_sample;
    reg [5:0] note_to_load;
    reg [5:0] duration_to_load;
    reg load_new_note;
    wire done_with_note, new_sample_ready, beat;
    wire [15:0] sample_out;

    note_player np(
        .clk(clk),
        .reset(reset),

        .play_enable(play_enable),
        .note_to_load(note_to_load),
        .duration_to_load(duration_to_load),
        .load_new_note(load_new_note),
        .done_with_note(done_with_note),

        .beat(beat),
        .generate_next_sample(generate_next_sample),
        .sample_out(sample_out),
        .new_sample_ready(new_sample_ready)
    );

    beat_generator #(.WIDTH(17), .STOP(15)) beat_generator(
        .clk(clk),
        .reset(reset),
        .en(1'b1),
        .beat(beat)
    ); 

    // Clock and reset
    initial begin
        clk = 1'b0;
        reset = 1'b1;
        repeat (4) #5 clk = ~clk;
        reset = 1'b0;
        forever #5 clk = ~clk; 
    end

    // Tests
    initial begin
		load_new_note = 0;
		note_to_load = 0;
		duration_to_load = 0;
		play_enable = 0;
		generate_next_sample = 0; 
		#105;
		play_enable = 1'b1;
		note_to_load = 6'd1; //Note = 1A
		duration_to_load = 6'd2; //Duration = 2/48ths of a second
		load_new_note = 1'b1;
		#10;
		load_new_note = 1'b0;
		#10;
		generate_next_sample = 1'b1;
		#500;
		note_to_load = 6'd47; //Note = 4G
		duration_to_load = 6'd0; //Duration = 10/48ths of a second
		load_new_note = 1'b1;
		#10
		load_new_note = 1'b0;
		#2000
		play_enable = 0;
		generate_next_sample = 0;
		
	 end
endmodule
