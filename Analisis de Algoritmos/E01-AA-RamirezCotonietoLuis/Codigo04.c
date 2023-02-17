//Codigo 4 - Analisis de Algoritmos - 3CM13
// Luis Fernando Ramirez Cotonieto

#include <stdio.h>

void Algoritmos(int n){
  int i=n;
  int j;

  while(i>=0){
      for(j=n;i<j;i-=2, j/=2)
    {

        printf("Algoritmos\n");
      }
    }
}

int main (void){
    int n;
    scanf("%d", &n);
    Algoritmos(n);
    return 0;
}
