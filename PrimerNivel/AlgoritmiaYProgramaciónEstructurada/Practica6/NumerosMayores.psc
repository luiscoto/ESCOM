Algoritmo Numerosmayores
	//Desarrollar un algoritmo que vaya tomando numero por numero solicitando al menos 3 numeros enteros 
	//y dando como resultado el producto de los tres numeros mayores obtenidos
	Definir A,B,C,D, Varactual, resp, result Como Entero
	Definir parada como logico
	parada=falso;
	
	Escribir "Este programa tomara numero por numero solicitando al menos 3 numeros enteros"; 
	Escribir "Dando como resultado el producto de los tres numeros mayores obtenidos";
	
	Escribir "Ingrese un numero";
	Leer A;
	Escribir "Ingrese un numero";
	Leer B;
	Escribir "Ingrese un numero";
	Leer C;
	
		Mientras parada==Falso Hacer
			Escribir "Ingrese un numero";
			Leer Varactual;
			Si Varactual > A Entonces
				A<-Varactual
			SiNo
				    Si Varactual > B Entonces
					B<-Varactual
				SiNo
					si Varactual > C Entonces
					C<-Varactual;
				    FinSi
			    FinSi
			Fin Si
			Escribir "�Es el ultimo numero?(si=1/no=0)";
			Leer resp;
			Si resp==0 Entonces
				parada=Falso;
			SiNo
				parada=Verdadero;
			Fin Si
		Fin Mientras
		
		result=A+B+C;
		Escribir "La multiplicacion de los numeros mayores ingresados es: ",result
	
FinAlgoritmo
