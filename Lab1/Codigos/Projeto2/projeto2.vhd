
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity projeto2 is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           d : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           x : out  STD_LOGIC;
           y : out  STD_LOGIC;
           sel : in  STD_LOGIC_VECTOR (1 downto 0));
end projeto2;

architecture Behavioral of projeto2 is
	signal mux: STD_LOGIC;
begin
--Parte Combinacional
	mux <= a WHEN sel="00" ELSE
			 b WHEN sel="01" ELSE
			 c WHEN sel="10" ELSE
			 d;
--Registrador: Determinado pelo evento de clk
-- proces(lista de sensibilidade)
	process(clk)
	begin
		if(clk'event and  clk='1') then
			y <= mux;
		end if;
	end process;
	x <= mux;
end Behavioral;



