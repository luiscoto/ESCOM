Proceso FibonacciRepetir
	//Sea f0=0 f1=1  desarrollar fn= fn-1+fn-2 hasta n tal que n 
	//sea un limite establecido por el usuario durante la ejecucion serie fibonacci
	Definir Fn2, Fn1, Fn, e,n como entero
	Fn2=1;
	Fn1=0;
	Fn=0;
	e=0;
	
	Escribir "Este programa realizara un calculo a partir de un numero ingresado";
	Escribir "Ingrese un numero";
	Leer n;

	Repetir
		e = e+1;
		Fn=Fn2+Fn1;
		Fn2=Fn1;
		Fn1=Fn;
		
		Escribir Fn;
	Hasta Que e==n 
	
FinProceso
