library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity lab1_proj1 is
    Port ( a, b, c, d : in  STD_LOGIC_VECTOR (3 downto 0);
           sel : in  STD_LOGIC_VECTOR (1 downto 0);
           clk : in  STD_LOGIC;
           x , y : out  STD_LOGIC_VECTOR (3 downto 0));
end lab1_proj1;

architecture Behavioral of lab1_proj1 is
signal mux: STD_LOGIC_VECTOR(3 downto 0);

begin
--Parte Combinacional
	mux <= a WHEN sel="00" ELSE
			 b WHEN sel="01" ELSE
			 c WHEN sel="10" ELSE
			 d;
	
--Registrador
	process(clk)
	begin
		if(clk'event and clk='1') then
			y<=mux;
		end if;
	end process;

	x<=mux;
end Behavioral;
