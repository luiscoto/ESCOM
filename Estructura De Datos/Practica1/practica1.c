#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

char* mostrar_menu();
char identificar(char llave){

	char sal = llave;

	if(llave == '(')
		sal = ')';
	else if(llave == '[')
		sal = ']';
	else if(llave == '{')sal = '}';

	return sal;
}
void mostrar_archivo();


int main(int argc, char *argv[]) {

    int  valid = 1;
	char* arch;
	char car1,car2;
	FILE* archivo;
	FILE* log = fopen("Log.txt","w");
	pila pila;

	Info info,aux;
	crearpila(&pila);


	do{
		fprintf(log,"\n----- Nueva Ejecucion -----\n");
		arch = mostrar_menu();
		printf("Archivo: %s\n",arch);
		archivo = fopen(arch,"r");
		fprintf(log,"Archivo: %s\n",arch);

		info.col = 1;
		info.linea = 1;

		if (archivo == NULL){
		  printf("Error al abrir el archivo");
		  break;
		}
    	else{
			do{
				info.caracter=fgetc(archivo);
        		putc(info.caracter,stdout);

				if(info.caracter == EOF)
					if(!empty(pila)){
						aux = top(pila);
						printf("Error 1: Caracter de agrupamiento sin cierre\n");
						fprintf(log,"Se encontró un caracter de apertura '%c' sin cierre en linea: %d col: %d\n",aux.caracter,aux.linea,aux.col);
						valid = 0;
					}else if(valid == 1){
						valid = 0;
						printf("Archivo analizado sin ningun error\n");
						fprintf(log,"Archivo analizado sin ningun error\n");
					}

				info.col++;


				if(info.caracter == '\n'){
					info.col = 1;
					info.linea++;
           		}else
           		//Si encontramos llave de apertura solo la metemos
					if(info.caracter == '(' || info.caracter == '[' || info.caracter == '{'){
						printf("\nCaracter encontrado: %c\n",info.caracter);
						system("PAUSE");
               			//Ver si el push se hizo correctamente
						if(push(&pila,info)==0)
							fprintf(log,"'%c' insertado correctamente en linea: %d col: %d\n",info.caracter,info.linea, info.col);
               			else{
                   			printf("Error al intentar a�adir un nuevo elemento a la pila");
                   			valid = 0;
                   		}
                   			
           			}else 
           		//Si encontramos un caracter de cierre verificamos el tope de la fila
						if(info.caracter == ')' || info.caracter == ']' || info.caracter == '}'){
               				printf("\nCaracter encontrado: %c\n",info.caracter);
               				//Si está vacía significa que hay de cierre pero no de apertura (Error 2)
							if(empty(pila)){
								printf("Error 2: Caracter de cierre sin apertura\n");
								fprintf(log,"Error 2: Se encontró un caracter '%c' sin apertura previa en linea: %d, col: %d\n",info.caracter,info.linea,info.col);
								valid = 0;
							}else{
								//La pila no está vacía, podrían ser iguales o no
								aux = top(pila);
                   				car1 = aux.caracter;
                   				car2 = identificar(aux.caracter);

								//Mostrar los valores hallados y necesarios   
								printf("Caracter en top: %c\n",aux.caracter);
								printf("Caracter requerido de cierre: %c\n\n",car2);
								system("PAUSE");
								
								//Si no son iguales, son incompatibles (Error 3)
								if(info.caracter == car2){
									aux = pop(&pila);
									fprintf(log,"Conjunto %c %c cerrado correctamente, linea: %d, col: %d,\n ",car1,info.caracter,info.linea,info.col);
						
								}else{
									valid = 0;
									printf("Error 3: Caracter de agrupamiento incompatible\n");
									fprintf(log,"Error 3: Se esperaba un caracter de cierre '%c' pero se encontro '%c' linea: %d, col: %d\n",car2,info.caracter,info.linea,info.col);
								}
							}
          				}else continue;

			}while(valid == 1);

			valid = 0;
		
			printf("Ultima Columna: %d\nLineas: %d\n", info.col, info.linea);

			vaciarpila(&pila);
			fclose(archivo);

			printf("\nDesea volver a iniciar? 1/0\n");
			scanf("%d",&valid);
		}
	}while(valid == 1);
	fclose(log);

	return 0;
}

char* mostrar_menu(){

	int op;
	char *nombre;

	do{
	printf("Selecciona algun archivo para analizar:\n");
	printf("1) 1.c\n2) 2.c\n3) 3.c\n4) 4.c\n5) Salir\nOp: ");

	scanf("%d",&op);

	switch (op)
	{
		case 1:
			return "1.c";
		break;

		case 2:
			return"2.c";
		break;

		case 3:
			return"3.c";
		break;
			
		case 4:
			return"4.c";
		break;

		case 5:  break;
	
		default: printf("Opción no valida, vuelva a intentar");
			op = 0;
		break;
		}
	}while(op == 0);

		return nombre;
}
