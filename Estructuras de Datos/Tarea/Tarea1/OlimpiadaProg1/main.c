// Estructuras de Datos ----- 1CV3
// Ramirez Cotonieto Luis Fernando ---- 2020630417

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct datos{
    char nombre[40];
    char pais[25];
};

struct atleta{
    char deporte[40];
    struct datos personal;
    int ndemed;
};

int main(int argc, char *argv[]) {
	
	struct atleta ats[5];
	
	strcpy(ats[0].personal.nombre, "Michael Phelps");
    strcpy(ats[0].personal.pais, "Estados Unidos");
    strcpy(ats[0].deporte, "Natacion");
    ats[0].ndemed = 28;

    strcpy(ats[1].personal.nombre, "Larisa Latynina");
    strcpy(ats[1].personal.pais, "Union Sovietica");
    strcpy(ats[1].deporte, "Gimnasia");
    ats[1].ndemed = 18;

    strcpy(ats[2].personal.nombre, "Paavo Nurmi");
    strcpy(ats[2].personal.pais, "Finlandia");
    strcpy(ats[2].deporte, "Atletismo");
    ats[2].ndemed = 12;

    strcpy(ats[3].personal.nombre, "Mark Spitz");
    strcpy(ats[3].personal.pais, "Estados Unidos");
    strcpy(ats[3].deporte, "Natacion");
    ats[3].ndemed = 11;

    strcpy(ats[4].personal.nombre, "Carl Lewis");
    strcpy(ats[4].personal.pais, "Estados Unidos");
    strcpy(ats[4].deporte, "Atletismo");
    ats[4].ndemed = 10;

    system("cls");
    
	int i ;
    for(i= 0; i < 5; ++i){
    	
        printf("%d ° lugar:\n",i+1);
        printf("Nombre: %s\n",ats[i].personal.nombre);
        printf("Pais: %s\n",ats[i].personal.pais);
        printf("Deporte: %s\n",ats[i].deporte);
        printf("Medallas ganadas: %d\n",ats[i].ndemed);
        printf("\n");
		
    }
	return 0;
}
