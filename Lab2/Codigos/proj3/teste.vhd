LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY teste IS
END teste;
 
ARCHITECTURE behavior OF teste IS 
    COMPONENT lab2_proj2
    PORT(
         x : IN  std_logic_vector(7 downto 0);
         a : OUT  std_logic_vector(3 downto 0);
         y : OUT  std_logic_vector(6 downto 0);
         led : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
   signal x : std_logic_vector(7 downto 0) := (others => '0');
   signal a : std_logic_vector(3 downto 0);
   signal y : std_logic_vector(6 downto 0);
   signal led : std_logic_vector(7 downto 0);
 
 
BEGIN
   uut: lab2_proj2 PORT MAP (
          x => x,
          a => a,
          y => y,
          led => led
        );
   stim_proc: process
   begin		
      wait for 10 ns;	
		x<="00000000";
      wait for 10 ns;	
		x<="00000000";
		wait for 10 ns;
		x<="01010001";
		wait for 10 ns;
		x<="11011010";
		wait for 10 ns;
		x<="11010111";
		wait for 10 ns;
		x<="00001111";

      wait;
   end process;

END;
