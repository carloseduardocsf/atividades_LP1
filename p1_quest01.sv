module p1_quest01 (input X0, X1, X2, X3, output logic a, b, c, d, e, f, g);


always_comb begin

	begin
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e = 0;
		f = 0;
		g = 0;
	end
	
	case({X0, X1, X2, X3})
		4'b0000: begin a = 1; b = 1; c = 1; d = 1; e = 1; f = 1;				end   // numero 0: a, b, c, d, e, f
		4'b0001: begin b = 1; c = 1;              								end	// numero 1: b, c
		4'b0010: begin a = 1; b = 1; d = 1; e = 1; g = 1;						end	// numero 2: a, b, g, e, d
		4'b0011: begin a = 1; b = 1; c = 1; d = 1; g = 1;						end	// numero 3: a, b, g, c, d
		4'b0100: begin b = 1; c = 1; f = 1; g = 1;								end	// numero 4: f, g, b, c
		4'b0101: begin a = 1; c = 1; d = 1;	f = 1; g = 1;						end	// numero 5: a, f, g, c, d
		4'b0110: begin a = 1; c = 1; d = 1;	e = 1; f = 1; g = 1; 			end	// numero 6: a, f, g, c, d, e
		4'b0111: begin a = 1; b = 1; c = 1;											end	// numero 7: a, b, c
		4'b1000: begin a = 1; b = 1; c = 1; d = 1; e = 1; f = 1;	g = 1;	end	// numero 8: a, b, c, d, e, f, g
		4'b1001: begin a = 1; b = 1; c = 1; d = 1; f = 1;	g = 1;			end	// numero 9: a, b, c, d, f, g
		
	endcase
	
end

endmodule 