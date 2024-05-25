--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:00:55 04/03/2024
-- Design Name:   
-- Module Name:   C:/Users/Aluno/Documents/Microeletronica2024/Lab_2/proj2/teste2.vhd
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
ENTITY teste2 IS
END teste2;
 
ARCHITECTURE behavior OF teste2 IS 
    COMPONENT lab2_proj2
    PORT(
         x : IN  std_logic_vector(7 downto 0);
         a : OUT  std_logic_vector(3 downto 0);
         l : OUT  std_logic_vector(3 downto 0);
         y : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
   signal x : std_logic_vector(7 downto 0) := (others => '0');
   signal a : std_logic_vector(3 downto 0);
   signal l : std_logic_vector(3 downto 0);
   signal y : std_logic_vector(6 downto 0);

BEGIN
   uut: lab2_proj2 PORT MAP (
          x => x,
          a => a,
          l => l,
          y => y
        );
   stim_proc: process
   begin		
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
