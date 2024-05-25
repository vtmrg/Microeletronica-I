
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY testebench_relogio IS
END testebench_relogio;
 
ARCHITECTURE behavior OF testebench_relogio IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lab4_1
    PORT(
         clk : IN  std_logic;
         modo : IN  std_logic;
         pausa : IN  std_logic;
         rst : IN  std_logic;
         y : OUT  std_logic_vector(6 downto 0);
         a : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal modo : std_logic := '0';
   signal pausa : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal y : std_logic_vector(6 downto 0);
   signal a : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lab4_1 PORT MAP (
          clk => clk,
          modo => modo,
          pausa => pausa,
          rst => rst,
          y => y,
          a => a
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
      wait for clk_period*100; --
		pausa<='1';
		wait for clk_period*500; --
		pausa<='0';
		wait for clk_period*5000000; 
		rst<='1';
      wait;
   end process;

END;
