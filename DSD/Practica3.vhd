library ieee;
use ieee.std_logic_1164.all;

entity Practica3 is port(
	  clk : in  STD_LOGIC;
           clear : in  STD_LOGIC;
		   sel : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (7 downto 0)
);
end entity;


architecture A_Practica3 of Practica3 is 
	signal TMP:STD_LOGIC:='0';
	signal QK,QT1,QT2,QD,T:STD_LOGIC:='0';
	signal q_tmp: std_logic_vector(7 downto 0):= "00000000";
begin
	TMP<='0' when(clear='1')else
			'1' when(clk'event and clk='1');
	
	process(sel,TMP,clear,q_tmp)
	begin
		if(clear='1')then
			q_tmp<="00000000";
		elsif(TMP='1')then
			if(sel='0')then 
				--CONTADOR JOHNSON
				
				q_tmp(1) <= q_tmp(0);
			    	q_tmp(2) <= q_tmp(1);
			    	q_tmp(3) <= q_tmp(2);
			    	q_tmp(4) <= q_tmp(3);
				q_tmp(5) <= q_tmp(4);
				q_tmp(6) <= q_tmp(5);
				q_tmp(7) <= q_tmp(6);
				q_tmp(0) <= not(q_tmp(7));
			elsif(sel='1')then
				--CONTADOR ANILLO
				q_tmp(1) <= q_tmp(0);
			    	q_tmp(2) <= q_tmp(1);
			    	q_tmp(3) <= q_tmp(2);
			    	q_tmp(4) <= q_tmp(3);
				q_tmp(5) <= q_tmp(4);
				q_tmp(6) <= q_tmp(5);
				q_tmp(7) <= q_tmp(6);
				q_tmp(0) <= q_tmp(7);
			end if;
		end if;
	end process;
	q<=q_tmp;

	
end A_Practica3;