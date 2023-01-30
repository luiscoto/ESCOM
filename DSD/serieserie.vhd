library ieee;
use ieee.std_logic_1164.all;

entity serieserie is
	Port (j,k,clk: in std_logic;
		q,qn:out std_logic);
end serieserie;

architecture funcionamiento of serieserie is
signal q0,q1,q2,q3,q4:std_logic;
begin 
	process(clk,j,k)
	begin
		if(clk='1' and clk'event)then	
			q0<=(not k and q0) or (not q0 and j);
			q1<=(not k and q0) or (not q0 and j);
			q2<=(not k and q1) or (not q1 and j);
			q3<=(not k and q0) or (not q2 and j);
			q4<=(not k and q3) or (not q3 and j);
			q<=(not k and q4) or (not q4 and j);
			qn<=not q;
		end if;
	end process;
end funcionamiento;