Proceso Semaforo
	Definir color Como Caracter;
	Definir op Como Entero;
	Escribir "Bienvenido. Este programa sirve para mostrar el uso de cada color del semaforo.";
	op = 1;

	Mientras op == 1 Hacer
		Escribir "Los colores del semaforo son: ROJO, VERDE, AMARILLO."
		Escribir "Escriba el color del que desea saber: ";
		Leer color;
		color = Mayusculas(color);
		Si color == "ROJO" Entonces
			Escribir "Este color sirve para indicar un alto total.";
			Escribir "Gracias por usar el programa. :)";
		Sino
			Si color == "AMARILLO" Entonces
				Escribir "Este color sirve para indicar que dismimuya su velocidad, anticipando el alto.";
				Escribir "Gracias por usar el programa. :)";
			Sino
				Si color == "VERDE" Entonces
					Escribir "Este color sirve para indicar que avance respetando los limites de velocidad.";
					Escribir "Gracias por usar el programa. :)";
				Sino
					Escribir "No escribio ningun color valido, intente de nuevo.";
				FinSi
			FinSi
		FinSi
		Escribir "�Quiere repetir el programa? Marque 1 para repetir, presione cualquier numero para cerrar";
		Leer op;
	FinMientras
	
	
FinProceso
