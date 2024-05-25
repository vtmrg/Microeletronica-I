library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_Std.ALL;

entity lab2_proj2 is
	GENERIC(N: POSITIVE := 8);
	PORT (x: in STD_LOGIC_VECTOR(N-1 downto 0);     -- x -> entrada
			a: out STD_LOGIC_VECTOR(3 downto 0);
			y : out  STD_LOGIC_VECTOR(6 downto 0);
			l : out STD_LOGIc_VECTOR(3 downto 0); -- valor de 1s
			led: out  STD_LOGIC_VECTOR(N-1 downto 0)); -- y -> valor que sera aceso
end lab2_proj2;

architecture Behavioral of lab2_proj2 is

	TYPE type1 is array (0 to N) of integer range 0 to 8;
	signal cont : type1;
	signal ordenador : std_logic_vector(0 to N-1);
	signal ultimo : integer range 0 to 8;
	signal d : std_logic_vector(3 downto 0);
begin

	a <= "0111";
	
	--CONTA HAMMING
	cont(0)<=0;
	
	gen1: for i in 1 to N generate  
		cont(i)<=cont(i-1)+1 when x(i-1)='1' else
				 cont(i-1);
	end generate gen1;
	
	ultimo<=cont(N);
	d<=std_logic_vector(to_unsigned(ultimo,4));
	l<=d;
	-- Decodificador
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

	--ORDENA

	gen2: for i in 0 to N-1 generate
		ordenador(i)<= '1' when i< cont(N) else
							'0';
	end generate gen2;
	
	led <= ordenador;
	
   
 


end Behavioral;