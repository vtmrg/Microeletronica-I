library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity decodificador is
	PORT( d: in integer;
			y: out STD_LOGIC_VECTOR(6 downto 0));
end decodificador;

architecture Behavioral of decodificador is

begin

	y <= "0000001" when d = 0 else  --0
		  "1001111" when d = 1 else  --1
		  "0010010" when d = 2 else  --2
		  "0000110" when d = 3 else  --3
		  "1001100" when d = 4 else  --4
		  "0100100" when d = 5 else  --5
	     "1100000" when d = 6 else  --6
		  "0001111" when d = 7 else  --7
		  "0000000" when d = 8 else  --8
	     "0001100";					  --9	
end Behavioral;