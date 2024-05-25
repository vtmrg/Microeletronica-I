--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:40:55 04/16/2024
-- Design Name:   
-- Module Name:   C:/VitoriaG/Microeletronica_1/lab4_proj1/teste.vhd
-- Project Name:  lab4_proj1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: lab4_proj1
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
 
    COMPONENT lab4_proj1
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         pausa : IN  std_logic;
         y0 : OUT  std_logic_vector(6 downto 0);
         y1 : OUT  std_logic_vector(6 downto 0);
         y2 : OUT  std_logic_vector(6 downto 0);
         y3 : OUT  std_logic_vector(6 downto 0);
         anodo : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal pausa : std_logic := '0';

 	--Outputs
   signal y0 : std_logic_vector(6 downto 0);
   signal y1 : std_logic_vector(6 downto 0);
   signal y2 : std_logic_vector(6 downto 0);
   signal y3 : std_logic_vector(6 downto 0);
   signal anodo : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lab4_proj1 PORT MAP (
          clk => clk,
          rst => rst,
          pausa => pausa,
          y0 => y0,
          y1 => y1,
          y2 => y2,
          y3 => y3,
          anodo => anodo
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
