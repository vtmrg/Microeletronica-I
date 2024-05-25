LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY code_pt1 IS
END code_pt1;
 
ARCHITECTURE behavior OF tb_proj2_pt1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT tb_proj2_pt1
    PORT(
         d : IN  std_logic_vector(3 downto 0);
         a : OUT  std_logic_vector(3 downto 0);
         y : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal d : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal a : std_logic_vector(3 downto 0);
   signal y : std_logic_vector(6 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: code_pt1 PORT MAP (
          d => d,
          a => a,
          y => y
        );
 

   -- Stimulus process
   stim_proc: process
   begin		
			d<="0000"; -- 0
			wait for 10 ns;

			d<="0001"; --1
			wait for 10 ns;
			
			d<="0010"; --2
			wait for 10 ns;
			
			d<="0011"; --3
			wait for 10 ns;
			
			d<="0100"; --4
			wait for 10 ns;
			
			d<="0101"; --5
			wait for 10 ns;
			
			d<="0110"; --6
			wait for 10 ns;
			
			d<="0111"; --7
			wait for 10 ns;
			
			d<="1000"; --8
			wait for 10 ns;
			
			d<="1001"; --9
			wait for 10 ns;
			
			d<="1010"; --10
			wait for 10 ns;
			
			d<="1011"; --11
      wait;
   end process;

END;
