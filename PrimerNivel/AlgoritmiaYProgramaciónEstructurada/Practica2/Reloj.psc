Proceso Alarma
	//Solicita una alarma por el usuario y mostrar la ejecucion
	//Formato hh:mm:ss
	//Al llegar la hora se debe salir: "�ALARMA PRACTICA TERMINADA!
	//El reloj debe seguir saliendo
	
	Definir hor, min, seg, hor1, min1, seg1, tt, tt2, cont Como Entero;
	Escribir "RELOJ";
	Escribir "Dame las horas, minutos y segundos. Se mostrara en el orden: HH:MM:SS";
	Leer hor;
	Leer min;
	Leer seg;
	Escribir "Dame las horas, minutos y segundos en que finalizara tu alarma.";
	Leer hor1;
	Leer min1;
	Leer seg1;
	
	tt2 = (hor1*3600) + (min1*60) +  seg1; 
	Repetir
		
			tt= (hor*3600) + (min*60) +  seg;
		Escribir hor ":", min ":", seg;
		Esperar 1000 Milisegundos
		Borrar Pantalla
		Si seg==59 Entonces
			seg=0;
		Sino
			seg=seg+1;
		FinSi
		Si min=59 Entonces
			min=0;
		Sino
			Si seg=59 Entonces
				min=min+1;
			Sino
				min=min;
			FinSi
		FinSi
		
	Hasta Que tt == tt2;
	Si tt==tt2 Entonces
		Repetir
			Escribir "ALARMA!";
		Hasta Que ;
		
	Sino
		Escribir " ";
	FinSi
	Repetir
		
		tt2= (hor1*3600) + (min1*60) +  seg1;
		Escribir hor1 ":", min1 ":", seg1;
		
		Esperar 1000 Milisegundos
		Borrar Pantalla
		Si seg1==59 Entonces
			seg1=0;
		Sino
			seg1=seg1+1;
		FinSi
		Si min1=59 Entonces
			min1=0;
		Sino
			Si seg1=59 Entonces
				min1=min1+1;
			Sino
				min1=min1;
			FinSi
		FinSi
		
	Hasta Que tt2=12960000
FinProceso
