--Practica 1 DSD ... Ramirez Cotonieto Luis Fernando

library ieee;
use ieee.std_logic_1164.all;

entity FlipFlop is port (

	--Entradas de FlipFlops
	D, T, S, R, J, K, clock, clear : in std_logic; 
	--Selector del Multiplexor
	selector : in std_logic_vector ( 1 downto 0 );
	--Salidas
   	display : out std_logic_vector ( 5 downto 0 ) 

);


end FlipFlop;

architecture a_FlipFlop of FlipFlop is

signal qD, qT, qSR, qJK : std_logic;
signal MUX : std_logic;

begin

	--FlipFlop D
	process ( clock, clear )
	begin
		if ( clear = '1' ) then
			qD <= '0';
		--Clock
		elsif ( clock'event and clock = '1' ) then 
			qD <= D;
		end if;
	end process;

	--FlipFlop T
	process ( clock, clear ) 
	begin
		if ( clear = '1' ) then
			qT <= '0';
		elsif ( clock'event and clock = '1' ) then
			qT <= T xor qT;
		end if;
	end process;

	--FlipFlop SR
	process ( clock, clear )
	begin
		if ( clear = '1' ) then
			qSR <= '0';
		elsif ( clock'event and clock = '1' ) then 
			qSR <= ( ( not R ) and qSR ) or S;
		end if;
	end process;

	--FlipFlop JK
	process ( clock, clear )
	begin 
		if ( clear = '1' ) then 
			qJK <= '0';
		elsif ( clock'event and clock = '1' ) then
			qJK <= ( J and ( not qJK ) ) or ( ( not K ) and qJK );
		end if;
	end process;

	--Multiplexor
	process ( selector, qD, qT, qSR, qJK )
	begin 
		if ( selector = "00" ) then
			MUX <= qJK;
		elsif ( selector = "01" ) then
			MUX <= qT;
		elsif ( selector = "10" ) then
			MUX <= qD;
		else
			MUX <= qSR;
		end if;
	end process;

	display <= "000000" when ( MUX = '0' ) else
			"100111";

end architecture;