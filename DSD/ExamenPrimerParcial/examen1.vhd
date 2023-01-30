library ieee;
use ieee.std_logic_1164.all;

entity FlipFlopD is port(
	D,clear,preset,clock:in std_logic;
	Q,Qnot: inout std_logic
);
end FlipFlopD;

architecture funcional of FlipFlopD is
begin
	process (clear,preset,clock)
		begin
			if preset='1' then
			Q<= '1';
			Qnot<='0';
			elsif clear = '1' then
			Q<= '0';
			Qnot<='1';
			elsif (clock'event and clock='1') then
			Q<= D;
			Qnot<= not D;
			end if;
	end process;
end architecture;
---------------------------
library ieee;
use ieee.std_logic_1164.all;

entity FlipFlopJK is port(
	J,K,clear,preset,clock:in std_logic;
	Q,Qnot: inout std_logic
);
end FlipFlopJK;

architecture funcional of FlipFlopJK is

begin
	process (clear,preset,clock)
		begin
			if preset='1' then
			Q<= '1';
			Qnot<= '0';
			elsif clear = '1' then
			Q<= '0';
			Qnot<='1';
			elsif (clock'event and clock='1') then
				if (J='0' and K='0') then
				Q<=Q;
				Qnot<=Qnot;
				elsif(J='1' and K='0')then
				Q<='1';
				Qnot<='0';
				elsif (J='0' and K='1')then
				Q<='0';
				Qnot<='1';
				elsif (J='1' and K='1')then
				Q<=Qnot;
				Qnot<=Q;
				end if;
			end if;
	end process;
end architecture;
---------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;

entity FlipFlopT is port(
	T,clear,preset,clock:in std_logic;
	Q,Qnot: inout std_logic
);
end FlipFlopT;

architecture funcional of FlipFlopT is

begin
	process (clear,preset,clock)
		begin
			if preset='1' then
			Q<= '1';
			Qnot<= '0';
			elsif clear = '1' then
			Q<= '0';
			Qnot<='1';
			elsif (clock'event and clock='1') then
				if T='0' then
				Q<=Q;
				Qnot<=Qnot;
				elsif T = '1' then
				Q<= Qnot;
				Qnot<= Q;
				end if;
			end if;
	end process;
end architecture;
------------------------------library ieee;
use ieee.std_logic_1164.all;

entity Mux4a1 is port(
	a,b,c,d,s0,s1: in std_logic;
	y: out std_logic
);
end Mux4a1;

architecture combinational of Mux4a1 is
signal x0,x1,x2,x3: std_logic;
begin
x0<= a and (not s0) and (not s1);
x1<= b and (not s1) and s0;
x2<= c and s1 and (not s0);
x3<= d and s0 and s1;
y<= x0 or x1 or x2 or x3;
end architecture;
--------------------------------library ieee;
use ieee.std_logic_1164.all;

entity ExamenDSD is port(
	J,K,clk,clear,s0,s1: in std_logic;
	Q: out std_logic
);
end entity;

use work.all;
architecture estructural of ExamenDSD is
	component FlipFlopJK is port(
	J,K,clear,preset,clock:in std_logic;
	Q,Qnot: inout std_logic
	);
	end component;
	component FlipFlopD is port(
	D,clear,preset,clock:in std_logic;
	Q,Qnot: inout std_logic
	);
	end component;
	component FlipFlopT is port(
	T,clear,preset,clock:in std_logic;
	Q,Qnot: inout std_logic
	);
	end component;
	component Mux4a1 is port(
	a,b,c,d,s0,s1: in std_logic;
	y: out std_logic
	);
	end component;
	signal Q1,Q2,Q3,Q4: std_logic;
begin
	FFJK: FlipFlopJK port map(
	J=>J,K=>K,clear=>clear,preset=>'0',clock=>clk,Q=>Q1
	);
	FFT1: FlipFlopT port map(
	T=>Q1,clear=>clear,preset=>'0',clock=>clk,Q=>Q2
	);
	FFD: FlipFlopD port map(
	D=>Q2, clear=>clear,preset=>'0',clock=>clk,Q=>Q3
	);
	FFT2: FlipFlopT port map(
	T=>Q3,clear=>clear, preset=>'0',clock=>clk,Q=>Q4
	);
	Mux: Mux4a1 port map(
	a=>Q1, b=> Q2, c=>Q3, d=>Q4, s0=>s0,s1=>s1, y=>Q
	);

end architecture;
------------------------------------------------