//Codigo 3 - Analisis de Algoritmos - 3CM13
// Luis Fernando Ramirez Cotonieto

#include <stdio.h>

void Algoritmos(int n){
  int i,j, k;
  unsigned long int cont=0;

  for(i=0; i<n*5; i+=2){
    {
      for(j=0;j<2*n;j++)
    {
      for(k=j;k<n;k++)

      {
        printf("Algoritmos\n",cont);
      }
    }
}
}
}

int main (void){
    int n;
    scanf("%d", &n);
    Algoritmos(n);
    return 0;
}
