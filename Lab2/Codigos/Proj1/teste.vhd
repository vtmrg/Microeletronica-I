--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:50:22 04/03/2024
-- Design Name:   
-- Module Name:   /home/lfilus/Lab_2/proj1/teste.vhd
-- Project Name:  proj1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: code_pt1
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY teste IS
END teste;
 
ARCHITECTURE behavior OF teste IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT code_pt1
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

   -- Clock process definitions
 

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
