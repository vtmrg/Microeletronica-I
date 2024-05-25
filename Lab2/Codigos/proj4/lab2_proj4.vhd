library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

entity lab3_proj4 is
    GENERIC (N: POSITIVE := 2);
    Port (    opcode : in  std_logic_vector(2 downto 0);  -- Unsi:  y = a + b 000 , y = a - b 001 , y = - a + b 010  , y = a + b + cin 011    
               -- Sig : y = a + b 100 , y = a - b 101 , y = - a + b 110 , y = a + b + cin 111
     a, b: in std_logic_vector(N-1 downto 0);
     cin: in std_logic;
              cout: out std_logic;
              y: out std_logic_vector(N-1 downto 0));
             
end entity;

architecture Behavioral of lab3_proj4 is
    signal somador_n: std_logic_vector(N downto 0);

begin
    somador_n <=  std_logic_vector('0' & unsigned(a)+unsigned(b)) when opcode = "000" else
                std_logic_vector('0' & unsigned(a)-unsigned(b)) when opcode = "001" else
                std_logic_vector('0' & unsigned(b)-unsigned(a)) when opcode = "010" else
                std_logic_vector('0' &  unsigned(a)+unsigned(b)+ ('0' & cin)) when opcode = "011" else

                std_logic_vector(a(N-1) & signed(a)+signed(b)) when opcode = "100" else
                std_logic_vector(a(N-1) & signed(a)-signed(b)) when opcode = "101" else
                std_logic_vector(a(N-1) & signed(b)-signed(a)) when opcode = "110" else
                std_logic_vector(a(N-1) & signed(a)+signed(b) +  ('0' & cin)) when opcode = "111" else
					 "000";
   
    y<= somador_n(N-1 downto 0);
    cout<=somador_n(N);
   
end Behavioral;