#include <stdio.h>
#include <string.h>
#include "list.h"

void clean_stdin(){
    int i;

    do
    {
        i = getchar();
    } while (i != '\n' || i != EOF);
    
}
int main(int argc, char const *argv[])
{
    int op_plst,op_can,tam_plst,valid = 0;
    char nombreC[20],op;
    lista playlist1,playlist2,biblioteca;
    info cancion;

    crearlista(&playlist1);
    crearlista(&playlist2);
    crearlista(&biblioteca);

    cancion.nombre_cancion = "Provincia - Daniela Spalla";
    add(0,cancion,playlist1);
    cancion.nombre_cancion = "Ya Nos Vamos - Daniela Spalla";
    add(1,cancion,playlist1);
    cancion.nombre_cancion = "Departamento - Bandalos Chinos";
    add(0,cancion,playlist2);
    cancion.nombre_cancion = "Super V - Bandalos Chinos";
    add(1,cancion,playlist2);

    cancion.nombre_cancion = "Belleza - Farmacos";
    add(0,cancion,biblioteca);
    cancion.nombre_cancion = "Las Luces De Esta Ciudad - Division Minuscula";
    add(1,cancion,biblioteca);
    cancion.nombre_cancion = "Chachacha - Josean Log";
    add(2,cancion,biblioteca);
    cancion.nombre_cancion = "Carta - Silvana Estrada";
    add(3,cancion,biblioteca);
    cancion.nombre_cancion = "Ojos Noche - Elsa y Elmar";
    add(4,cancion,biblioteca);

    printf("Tamano de la biblioteca: %d\n",tam_l(biblioteca));
    printf("Tamano de playlist 1: %d\n",tam_l(playlist1));
    printf("Tamano de playlist 2: %d\n\n\n",tam_l(playlist2));


    do{
     printf("\nBienvenido a ESCOM-tunes !\n\n");
     printf("Elija una accion:\n");
     printf("1) Mostrar Biblioteca de musica\n");
     printf("2) Mostrar listas de reproduccion\n");
     printf("3) Salir de ESCOM-tunes\n");

     switch (getchar())
     {
     case '1': 
        fflush(stdin);
        show(biblioteca);
        break;
     case '2':
        do{
         fflush(stdin);
         printf("Opcion 2:\n");
         printf("1) Elegir lista de reproduccion\n"); 
         printf("2) Regresar al menu principal\n");
        /*Switch menu 2*/
         switch (getchar()){
            case '1':
                valid = 1;
                printf("Playlist 1: Daniela Spalla\n");
                show(playlist1);
                printf("\nPlaylist 2: Bandalos Chinos\n");
                show(playlist2);
                
                fflush(stdin);
                printf("\n\nElija una playlist:");  
                scanf("%d",&op_plst);
                
                if(op_plst == 1)
                    show(playlist1);
                else if (op_plst == 2)
                    show(playlist2);
                else {printf("Opcion no valida\n");break;}

                do{
                    fflush(stdin);
                    printf("Elija una opcion:\n");
                    printf("\n1) Agregar una cancion a esta playlist\n");
                    printf("2) Eliminar una cancion de esta playlist\n");
                    printf("3) Regresar\n");
    
                    switch (getchar())
                    {
                
                    case '1':
                        valid = 1;
                        fflush(stdin);
                        printf("Escriba el nombre de la nueva cancion 1\n");
                        scanf("%s",nombreC);

                        printf("1");
                        cancion.nombre_cancion = nombreC;
                    
                        
                        if(op_plst == 1){
                            tam_plst = tam_l(playlist1)-1;
                            if(add(2,cancion,playlist1) == 1){
                                printf("Cancion agregada con exito\n");
                                show(playlist1);
                            }else printf("Contrata mejor premium :)\n");
                        }
                            else{
                            tam_plst = tam_l(playlist2)-1;
                            if(add(tam_plst,cancion,playlist2) == 1){
                                printf("Cancion agregada con exito\n");
                                show(playlist2);
                            }
                        }
                    break;

                    case '2':
                        valid = 1;
                        fflush(stdin);
                        printf("Escriba el numero de la cancion que desee eliminar\n");
                        printf("Comenzando por 0:\n");
                        scanf("%d",& op_can);
                        if(op_plst == 1){
                            if(borrar(op_can,playlist1) == 1){
                                printf("La cancion se elimino con exito\n");
                                show(playlist1);
                            }
                        }else
                            if(borrar(op_can,playlist2) == 1){
                              printf("La cancion se elimino con exito\n");
                             show(playlist2);
                            }
                    break;

                case '3': 
                    printf("Regresando a sitio seguro...");
                    valid = 1;
                break;

                default: printf("Opcion no valida\n"); break;
                }

                }while(valid != 1);
                valid = 1;
            break;


            case '2':
             fflush(stdin);
             printf("Volviendo al menu principal\n");
             system("cls");
             valid = 1;
            break;
        }
        }while(valid != 1);
        valid = 0;
        break;

    /*MP*/
     case '3': valid = 1; printf("Actualiza a Premium para mejor contenido!\n"); break;

     default: printf("Opcion no valida\n"); break;
     }
    }while(valid != 1);

    
    liberarlista(&biblioteca);
    liberarlista(&playlist1);
    liberarlista(&playlist2);

    printf("Fin del programa\n");
    return 0;
}
