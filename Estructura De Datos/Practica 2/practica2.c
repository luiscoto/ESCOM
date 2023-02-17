#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pila.h"

int precedencia(char opc){
	
	int pre;

	if(opc == '+' || opc =='-')
			pre = 1;
	  	else if(opc == '*' || opc == '/')
		  		pre = 2;
				  else if(opc == '^')
				  		pre = 3;
						  else
						  	pre = 4;

	return pre;
}

void verificar_operador(pila* pila, Info inf, int *cont){

	int pre_act,pre_pil,ncont;
	Info inf_aux;
	char aux;
 
	if (empty(*pila))
		push(pila,inf);

	else{
		inf_aux = top(*pila);
		pre_act = precedencia(inf.caracter);
		pre_pil = precedencia(inf_aux.caracter);

		if(pre_act == 4)
			{
				while (!empty(*pila))
				{
					printf("%c",inf_aux.caracter);
					pop(pila);
					if(empty(*pila))
						break;
					else{
						inf_aux = top(*pila);
						printf("%c",inf_aux.caracter);
						pop(pila);
					}
				}
				
			}else if (pre_act == pre_pil)
			{
				printf("%c",inf_aux.caracter);
				pop(pila);
				push(pila,inf);
				inf_aux = top(*pila);

			}else if(pre_act > pre_pil){
					push(pila,inf);
			}
			else if(pre_act < pre_pil){
				while (!empty(*pila))
				{
					printf("%c",inf_aux.caracter);
					pop(pila);
					if(empty(*pila))
						break;
					else{
						inf_aux = top(*pila);
						pop(pila);
					}
				}

				push(pila, inf);
			}
			else
				printf("Incorrecto\n");

	}	
}

void  cambiar_postfijo(char* op){
	char carac =' ';
	int cont = 0,i=0;
	pila P;
	Info inf;

	crearpila(&P);

	do
	{
		carac = op[i];
			if(isdigit(carac)){
				printf("%c",carac);
				if(cont == 2){
					cont = 0;
					inf = top(P); 
					pop(&P);
					if(empty(P))
						++cont;

				}
			} 
			else{
				inf.caracter = carac;
				verificar_operador(&P,inf,&cont);
			}
			++i;
	}while(carac!= '\n');
}

int main(int argc, char *argv[]) {
	
	FILE* operaciones = fopen("Operaciones.txt","r+");
	char* operacion;

	do{
		fgets(operacion,20,operaciones);
		printf("\nOperacion: %s",operacion);
		printf("Notacion postfija:");
		cambiar_postfijo(operacion);
		printf("\n");
	}while(!feof(operaciones));
    
	fclose(operaciones);

	return 0;
}
