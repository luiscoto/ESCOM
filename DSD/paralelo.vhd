ibrary ieee;
use ieee.std_logic_1164.all;

entity paralelo is
	Port (j,k,clk: in std_logic;
		q:inout std_logic_vector(4 downto 0));
end paralelo;
architecture funcionamiento of paralelo is
begin
	process(clk,q,j,k)
	begin
		if(clk='1' and clk'event)then
			q(0)<=(not k and q(0)) or (not q(0) and j);
			q(1)<=(not k and q(0)) or (not q(0) and j);
			q(2)<=(not k and q(1)) or (not q(1) and j);
			q(3)<=(not k and q(2)) or (not q(2) and j);
			q(4)<=(not k and q(3)) or (not q(3) and j);
		end if;
	end process;
end funcionamiento;