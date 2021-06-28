Algoritmo Convertidor_de_Decimal_a_Binario
	//El algoritmo debe realizar la conversion de un valor entero decimal dado
	//por el usiario a su correspondiente valor en binario  
	Definir dec como Real;
	Definir bin Como Caracter;
	Escribir "Ingrese un numero entero decimal para convertir a binario";
	Leer dec;
	Mientras dec>=1
		si dec%2==1
			bin = "1" + bin ;
		FinSi
		si dec%2==0
			bin = "0" + bin;
		FinSi
		dec = trunc(dec/2);
	FinMientras
	Escribir bin;
	
FinAlgoritmo
