
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

 
ENTITY testebench IS
END testebench;
 
ARCHITECTURE behavior OF testebench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lab1_proj1
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         c : IN  std_logic_vector(3 downto 0);
         d : IN  std_logic_vector(3 downto 0);
         sel : IN  std_logic_vector(1 downto 0);
         clk : IN  std_logic;
         x : OUT  std_logic_vector(3 downto 0);
         y : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    


   --Inputs
   signal a : std_logic_vector(3 downto 0) := "0000";
   signal b : std_logic_vector(3 downto 0) := "0001";
   signal c : std_logic_vector(3 downto 0) := "0010";
   signal d : std_logic_vector(3 downto 0) := "0100";
   signal sel : std_logic_vector(1 downto 0) := (others => '0');
   signal clk : std_logic := '0';
 	--Outputs
   signal x : std_logic_vector(3 downto 0);
   signal y : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lab1_proj1 PORT MAP (
          a => a,
          b => b,
          c => c,
          d => d,
          sel => sel,
          clk => clk,
          x => x,
          y => y
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

	stim_proc: process 
   begin	
	   wait for 30 ns;
		sel <= "01";
		wait for clk_period;
		sel <= "10";
		wait for clk_period;
		sel <= "11";
		wait;
   end process;
END;
