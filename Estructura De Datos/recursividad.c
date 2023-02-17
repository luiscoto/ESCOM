#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binario(int tam){

    int c;
    char num[tam];

    fflush(stdin);

    printf("Numero en binario:\n");
    scanf("%s",num);

    c = conv_binario(num,tam-1,tam-1);
    printf("Numero convertido: %d",c);
}

void convertir_binario(int num){
    int divid,resto;

    divid = num/2;
    resto = num%2;
        
        if(divid == 0)
            printf("%d",resto);
        else{
            convertir_binario(divid);
            printf("%d",resto);
        }
}

int conv_binario(char* cadena,int potencia, int tam){
    int dec = 0, posicion = tam-potencia;
    if(potencia == 0){
        if(cadena[posicion] == '1')
            return 1;
        else 
            return 0;
    }
    else{
        if(cadena[posicion] == '1')
            dec = pow(2,potencia);
        --potencia;

        return dec += conv_binario(cadena,potencia,tam);
    }     
}

int factorial(int numero){
    if(numero == 1 || numero == 0)
        return numero;
    else
        return numero*factorial(numero-1);
}

long fib( unsigned long pos){
	  printf("f(%d) ,",pos);
	  if (pos == 0 || pos == 1)
	         return pos;
	  return fib(pos-2)+fib(pos-1);  //Recursividad
	
}

long fibo( unsigned long p,long *A){

	  printf("f(%d) ,",p);
	  if (A[p]>-1)
	     return A[p];
	  A[p]=fibo(p-1,A)+fibo(p-2,A);  //Recursividad
	  return A[p];
}

long fibm( unsigned long p){
	 int i;
	 long Z [p+1];
	 
	 Z[0]=0;
	 Z[1]=1;
	 
	 for(i=2;i<=p;i++){
	 	Z[i]=-1;
	 }
	return fibo(p,Z);
}

void torres_hanoi(unsigned int disco, char disc_origen , char disc_anterior , char disc_destino ){

	   if ( disco == 1  )
	       printf("Mover el Disco 1 de %c a %c \n", disc_origen , disc_destino );
	   else {
	   	      torres_hanoi(disco-1,disc_origen,disc_destino,disc_anterior);
	   	      printf("Mover el Disco %d de %c a %c \n", disco , disc_origen , disc_destino);
	   	      torres_hanoi(disco-1,disc_anterior,disc_origen,disc_destino);
	   }
}


int main(int argc, char const *argv[])
{
    char opcion,valid = 1,bin[6];
    int numF;


    do{
        printf("Eliga una opcion (a - f):\n");
        printf("a) Factorial\nb) Fibonacci\nc) Fibonacci con Arreglo\n");
        printf("d) Torres de Hanoi\ne) Conversion Decimal a Binario\nf) Conversion de Binario a Decimal\nOpcion: ");
        scanf("%c",&opcion);

        switch (opcion)
        {
        case 'a':
                system("cls");
                valid = 0;
                fflush(stdin);
                printf("Inserta el numero del que deseas obtener el factorial:\n");
                scanf("%d",&numF);
                printf("El factorial de %d es %d",numF,factorial(numF));
            break;
        case 'b':
                system("cls");
                valid = 0;
                printf("Escribe el numero de la posicion en la serie de Fibonacci que quieras saber:\n");
                scanf("%d",&numF);
                printf("\nEl numero en la posicion %d es: %d\n",numF,fib(numF));
            break;
        case 'c':
                system("cls");
                printf("Escribe el numero de la posicion en la serie de Fibonacci que quieras saber:\n");
                scanf("%d",&numF);
                printf("\nEl numero en la posicion %d calculado con arreglo es: %d\n",numF,fibm(numF));
                valid = 0;
            break;
        case 'd':
                system("cls");
                printf("Indica el numero de discos de Hanoi (Del 1 al 5): \n");
                scanf("%d",&numF);
                torres_hanoi(numF,'A','B','C');
                valid = 0;
            break;
        case 'e':
                system("cls");
                valid = 0;
                printf("Escribe el numero que desee convertir a binario:\n");
                scanf("%d",&numF);
                printf("El numero %d en binario es: ",numF);
                convertir_binario(numF);
            break;
        case 'f':
                system("cls");
                valid = 0;
                printf("Ingrese la cantidad de bits:\n");
                scanf("%d",&numF);
                binario(numF);
             break;
        default:
            printf("Opcion no valida, intente de nuevo.");
            system("PAUSE");
            system("cls");
            break;
        }

    }while(valid == 1);


    return 0;
}
