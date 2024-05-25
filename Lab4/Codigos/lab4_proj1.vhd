library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
--Por Enquanto sem pausa e sem rst
entity lab4_1 is
	GENERIC( clock_placa: positive := 50); -- 50MHz , 100 para o teste bench 
	PORT( clk,modo,pausa,rst: in STD_LOGIC;
			y: out STD_LOGIC_VECTOR(6 downto 0); 
			a: out STD_LOGIC_VECTOR(3 downto 0));
end lab4_1;

architecture Behavioral of lab4_1 is
	COMPONENT relogio IS
		GENERIC(	clock: positive := 50); --50MHz
		Port ( clk,flag,rst : in std_logic; --flag serve para indicar se a contagem esta pausada ou nao , se 0 nao se 1 sim
				 seg_0: out integer range 0 to 9;
				 seg_1: out integer range 0 to 5;
				 min_0: out integer range 0 to 9;
				 min_1: out integer range 0 to 5;
				 hr_0: out integer range 0 to 9;
				 hr_1: out integer range 0 to 2);
	END COMPONENT;

	COMPONENT decodificador is
		PORT( d : in integer;
			y: out STD_LOGIC_VECTOR(6 downto 0));
	END COMPONENT;
	
	signal s_int_0: integer range 0 to 9;
	signal s_int_1: integer range 0 to 9; 
	signal m_int_0: integer range 0 to 9; 
	signal m_int_1: integer range 0 to 9;
	signal h_int_0: integer range 0 to 9; 
	signal h_int_1: integer range 0 to 2;
	signal d_0 : integer range 0 to 9;
	signal contador_anodo: std_logic_vector(3 downto 0) := "1110";
begin
	
	cont_s: relogio GENERIC MAP (clock_placa) PORT MAP (clk,pausa,rst, s_int_0, s_int_1, m_int_0, m_int_1, h_int_0 ,h_int_1);  --contador de segundos

	
	d0: decodificador PORT MAP (d_0,y);
	d_0 <= s_int_0 WHEN ( modo='0' and contador_anodo="1110") else
			s_int_1 WHEN ( modo='0' and contador_anodo="0111") else 
			m_int_0 WHEN ( modo='0' and contador_anodo="1011") else
			m_int_1 WHEN ( modo='0' and contador_anodo="1101") else -- MM :SS 
			
			m_int_0 WHEN ( modo='1' and contador_anodo="1110") else
			m_int_1 WHEN ( modo='1' and contador_anodo="0111") else 
			h_int_0 WHEN ( modo='1' and contador_anodo="1011") else
			h_int_1 WHEN ( modo='1' and contador_anodo="1101") else --  HH :SS 
			0;
	


	process(clk)
	--7    , 11   , 13   , 14
	--0111 , 1011 , 1101 , 1110
	variable contador_x: integer :=0;
	begin
	
	if(clk'event AND clk='1') then
	contador_x:=contador_x+1;
		if(contador_x=1000) then
			contador_x:=0;
			if(contador_anodo="1110") then
				contador_anodo<="1101";
			elsif(contador_anodo="1101") then
					contador_anodo<="1011";
			elsif(contador_anodo="1011") then
					contador_anodo<="0111";
		   elsif(contador_anodo="0111") then
					contador_anodo<="1110";
			end if;
			a<=contador_anodo;
		end if;
	end if;
	end process;



end Behavioral;
