--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:34:51 04/01/2024
-- Design Name:   
-- Module Name:   C:/VitoriaG/Microeletronica_1/lab3_proj4/testeinicial.vhd
-- Project Name:  lab3_proj4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: lab3_proj4
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
 
ENTITY testeinicial IS
END testeinicial;
 
ARCHITECTURE behavior OF testeinicial IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lab3_proj4
    PORT(
         a : IN  std_logic_vector(1 downto 0);
         b : IN  std_logic_vector(1 downto 0);
         cin : IN  std_logic;
         opcode : IN  std_logic_vector(2 downto 0);
         y : OUT  std_logic_vector(1 downto 0);
         cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(1 downto 0) := (others => '0');
   signal b : std_logic_vector(1 downto 0) := (others => '0');
   signal cin : std_logic := '0';
   signal opcode : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal y : std_logic_vector(1 downto 0);
   signal cout : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lab3_proj4 PORT MAP (
          a => a,
          b => b,
          cin => cin,
          opcode => opcode,
          y => y,
          cout => cout
        );


   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		a<= "10";
		b<= "01";
		opcode <= "000";
		wait for 10 ns;		
		opcode <= "010";
		wait for 10 ns;	
		opcode <= "100";
		wait for 10 ns;		
		opcode <= "110";
		wait for 10 ns;	
		opcode <= "111";
		wait for 100 ns;


      wait;
   end process;

END;
