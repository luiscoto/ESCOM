//Estructura de Datos --- 1CV3
//Ramirez Cotonieto Luis Fernando

#include <stdio.h> 
#include <stdlib.h> 

//char asiento[1][10];
int x,i,j, as; 
char a; 

void iniciar(char*); 
void reserva(char*); 
void cancelar(char*); 
void mostrar (char*); 

int main (){ 
    int opcion; 

    char *asiento; 

    asiento = (char*)malloc(sizeof(char)*10);

    iniciar (asiento); 

for(;;){ 
 
mostrar(asiento); 
printf("Bienvenido a la plataforma del autobus, selecciona tu opcion:\n");
printf("seleccione una opcion\n"); 
printf("1- Reservar asiento\n"); 
printf("2- Cancelar asiento\n"); 
printf("3- Mostrar asientos\n"); 
printf("4- Salir de la plataforma\n"); 
scanf("%d",&opcion); 

switch (opcion){ 
case 1: 
reserva(asiento); 
break; 

case 2:
cancelar(asiento);
break; 

case 3:
mostrar(asiento);
break;
 
case 4: 
exit(1); 
break; 
 
default:
printf("Opcion no valida\n");
break; 
} 
}
free(asiento);
} 

void iniciar(char* asiento){
for(i=0;i<10;i++){
asiento [i]='L'; 
}
} 

void reserva(char* asiento){

do{
printf("Escoge un asiento del 1 al 10\n"); 
printf("Ingrese numero asiento :\n"); 
scanf("%d",&as); 

 while(getchar() != '\n');//frena el bucle infinito en caso de ingresar un valor no entero  
}while(as < 1 || as > 10);

//system("clear"); 
if(asiento[as-1]=='O'){// si el asiento esta ocupado nos avisa y pide ingresar otra vez la reserva 
printf("el asiento %d Ya esta reservado\n vuelva a ingresar su reserva\n",as);
reserva(asiento); 
}else{ 
printf("Se ha reservado el asiento numero %d del camion\n",  as); 
asiento[as-1]= 'O'; 
} 
}

void cancelar (char* asiento){

do{ 

printf("Escoge un asiento del 1 al 10\n"); 
printf("Ingrese numero asiento :"); 
scanf("%d",&as); 

while(getchar() != '\n');//frena el bucle infinito

}while(as < 1 || as > 10) ; 


if(asiento[as-1]=='L'){ 
printf("el asiento %d NO esta reservado\n vuealva a ingresar su asiento\n",as); 
}else{ 

printf("Usted ha eliminado su reservacion en el asiento numero %d del camion\n",as); 
asiento[as-1]= 'L'; 

} 
} 

void mostrar (char* asiento){ 

a='A'; 

for (j=1;j<11;j++){ 

printf("%d ",j); 

} 

printf("\n"); 

for (j=0;j<10;j++)

printf("%c ",asiento[j]);  
printf("\n");	
} 
