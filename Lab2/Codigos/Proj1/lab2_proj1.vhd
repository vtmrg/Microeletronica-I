library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity code_pt1 is
    Port ( d : in  STD_LOGIC_VECTOR(3 downto 0);
			  a : out  STD_LOGIC_VECTOR(3 downto 0);
           y : out  STD_LOGIC_VECTOR(6 downto 0)); 
 
end code_pt1;

architecture Behavioral of code_pt1 is



begin

	a <= "0111";

	y <= "0000001" when d="0000" else
	 "1001111" when d="0001" else
	 "0010010" when d="0010" else
	 "0000110" when d="0011" else
	 "1001100" when d="0100" else
	 "0100100" when d="0101" else
	 "0100000" when d="0110" else
	 "0001111" when d="0111" else
	 "0000000" when d="1000" else
	 "0000100" when d="1001" else
	 "1111111";

 

end Behavioral;

