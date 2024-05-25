
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY teste_componente_relogio IS
END teste_componente_relogio;
 
ARCHITECTURE behavior OF teste_componente_relogio IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT relogio
    PORT(
         clk : IN  std_logic;
         flag : IN  std_logic;
         rst : IN  std_logic;
         seg_0 : OUT  std_logic_vector(0 to 3);
         seg_1 : OUT  std_logic_vector(0 to 2);
         min_0 : OUT  std_logic_vector(0 to 3);
         min_1 : OUT  std_logic_vector(0 to 2);
         hr_0 : OUT  std_logic_vector(0 to 3);
         hr_1 : OUT  std_logic_vector(0 to 1)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal flag : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal seg_0 : std_logic_vector(0 to 3);
   signal seg_1 : std_logic_vector(0 to 2);
   signal min_0 : std_logic_vector(0 to 3);
   signal min_1 : std_logic_vector(0 to 2);
   signal hr_0 : std_logic_vector(0 to 3);
   signal hr_1 : std_logic_vector(0 to 1);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: relogio PORT MAP (
          clk => clk,
          flag => flag,
          rst => rst,
          seg_0 => seg_0,
          seg_1 => seg_1,
          min_0 => min_0,
          min_1 => min_1,
          hr_0 => hr_0,
          hr_1 => hr_1
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


      wait for clk_period*100;

      -- insert stimulus here 

      wait;
   end process;

END;
