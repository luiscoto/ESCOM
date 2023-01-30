#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int i=0, num = 0, tam = 15;
    int *x,*p5,*p10,*p11;
    
    x = (int*)malloc(sizeof(int)*tam);
	
	printf("Los numeros aleatorios son: \n\n");
	
	srand(time(NULL));
    for(i = 0; i < tam; ++i){
        num = rand() % 101;
        x[i] = num;
    }

    for (i = 0; i < tam; i++)
        printf("%d: %d \n",i, x[i]);

    p5 = &x[5];
    p10 = &x[10];
    p11 = &x[11];

    printf("\n\nLa posicion 5:  %d\t Valor: %d\n", p5, *p5);
    printf("La posicion 10: %d\t Valor: %d\n",p10, *p10);
    printf("La posicion 11: %d\t Valor: %d\n",p11, *p11);
    
    free(x);

    return 0;
}
