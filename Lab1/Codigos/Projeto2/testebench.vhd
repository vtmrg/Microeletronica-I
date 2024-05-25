
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY testebench IS
END testebench;
 
ARCHITECTURE behavior OF testebench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT projeto2
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         c : IN  std_logic;
         d : IN  std_logic;
         clk : IN  std_logic;
         x : OUT  std_logic;
         y : OUT  std_logic;
         sel : IN  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';
   signal d : std_logic := '0';
   signal clk : std_logic := '0';
   signal sel : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal x : std_logic;
   signal y : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: projeto2 PORT MAP (
          a => a,
          b => b,
          c => c,
          d => d,
          clk => clk,
          x => x,
          y => y,
          sel => sel
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
	   wait for 30 ns;
		sel <= "01";
		wait for clk_period;
		c <= '1';
		sel <= "10";
		wait for clk_period;
		sel <= "11";
		wait;
   end process;

END;
