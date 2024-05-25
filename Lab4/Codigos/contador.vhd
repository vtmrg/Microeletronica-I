library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity relogio is
		GENERIC(	clock: positive := 100); --50MHz
		Port ( clk,flag,rst : in std_logic; --flag serve para indicar se a contagem esta pausada ou nao , se 0 nao se 1 sim
				 seg_0: out integer range 0 to 9;
				 seg_1: out integer range 0 to 5;
				 min_0: out integer range 0 to 9;
				 min_1: out integer range 0 to 5;
				 hr_0: out integer range 0 to 9;
				 hr_1: out integer range 0 to 2);
end relogio;

architecture Behavioral of relogio is

begin
	process(clk,rst,flag) 
		variable contador: INTEGER:=0;
		variable s0, s1, m0,m1,h0,h1: INTEGER:=0;
	begin
		if(rst='1') then
			s0:=0;
			s1:=0;
			m0:=0;
			m1:=0;
			h0:=0;
			h1:=0;
			contador:=0;
		elsif (clk'event AND clk='1' AND flag='0') then
			contador:=contador+1;
			if (contador = clock) then
					s0:=s0+1;
				if(s0=10) then
					s0:=0;
					s1:= s1+1;
					if(s1=6) then
						s1:= 0;
						m0:=m0+1;
						if(m0=10) then
							m0:=0;
							m1:= m1+1;
							if(m1=6) then
								m1:= 0;
								h0:=h0+1;
								if(h0=10) then
									h0:=0;
									h1:=h1+1;
									if(h1=2 AND h0=3) then
										h1:=0;
										h0:=0;
									end if;
								end if;
							end if;
						end if;
					end if;
				end if;
				contador:=0;
			end if;
		end if;
	seg_0<=s0;
	seg_1<=s1;
	min_0<=m0;
	min_1<=m1;
	hr_0<=h0;
	hr_1<=h1;
	end process;
end Behavioral;
