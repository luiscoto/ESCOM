//Codigo 01 - Analisis de Algoritmos - 3CM13
// Luis Fernando Ramirez Cotonieto

#include <stdio.h>

void Algoritmos(int n){

  int i,j,temp;
  float A[1000000000];

  for(i=1;i<n;i++)
    for(j=n;j>1;j/=2)
    {
      temp = A[j];
      A[j] = A[j+1];
}
}
int main (void){
    int n;
    printf("Escribe un numero:\n");
    scanf("%d", &n);
    Algoritmos(n);
    return 0;
}
