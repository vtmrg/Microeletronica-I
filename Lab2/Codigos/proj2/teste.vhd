--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:52:33 04/03/2024
-- Design Name:   
-- Module Name:   C:/Users/Aluno/Documents/Microeletronica2024/Lab_2/proj2/teste.vhd
-- Project Name:  proj2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: lab2_proj2
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
 
    COMPONENT lab2_proj2
    PORT(
         x : IN  std_logic_vector(7 downto 0);
         a : OUT  std_logic_vector(3 downto 0);
         y : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal x : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal a : std_logic_vector(3 downto 0);
   signal y : std_logic_vector(6 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lab2_proj2 PORT MAP (
          x => x,
          a => a,
          y => y
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		x<="11110101";
      wait for 10 ns;	
		x<="11110101";
		wait for 10 ns;
    

      -- insert stimulus here 

      wait;
   end process;

END;
