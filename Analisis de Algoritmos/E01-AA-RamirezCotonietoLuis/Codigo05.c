//Codigo 5 - Analisis de Algoritmos - 3CM13
// Luis Fernando Ramirez Cotonieto

#include <stdio.h>

void Algoritmos(int n){
  int i,j=0;
  for(i=1;i<4*n;i*=2){
    for(j=i;j<5*n;j+=3){
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
