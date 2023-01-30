#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
#include<pthread.h>

float mat1[40][40]={{1,2,3,4,5,6,7},
                  {1,2,3,4,5,6,7},
                  {1,2,3,4,5,6,7},
                  {1,2,3,4,5,6,7},
                  {1,2,3,4,5,6,7},
                  {1,2,3,4,5,6,7},
                  {1,2,3,4,5,6,7}
  };

float mat2[40][40]={{7,6,5,4,3,2,1},
                  {7,6,5,4,3,2,1},
                  {7,6,5,4,3,2,1},
                  {7,6,5,4,3,2,1},
                  {7,6,5,4,3,2,1},
                  {7,6,5,4,3,2,1},
                  {7,6,5,4,3,2,1}
};
int mat1t[7][7]={};
int mat2t[7][7]={};
int mat1inv[7][7]={};
int mat2inv[7][7]={};
int multi[7][7]={};

char archivo[10000];


void InverseOfMatrix(float matrix[][40], int order,int opc){

    float temp;
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < 2 * order; j++) {
            if (j == (i + order))
                matrix[i][j] = 1;
        }
    }

    for (int i = order - 1; i > 0; i--) {
        if (matrix[i - 1][0] < matrix[i][0])
            for (int j = 0; j < 2 * order; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i - 1][j];
                matrix[i - 1][j] = temp;
            }
    }

    for (int i = 0; i < order; i++) {
        for (int j = 0; j < 2 * order; j++) {
            if (j != i) {
                temp = matrix[j][i] / matrix[i][i];
                for (int k = 0; k < 2 * order; k++) {
                    matrix[j][k] -= matrix[i][k] * temp;
                }
            }
        }
    }

    for (int i = 0; i < order; i++) {

        temp = matrix[i][i];
        for (int j = 0; j < 2 * order; j++) {

            matrix[i][j] = matrix[i][j] / temp;
        }
    }

    for (int i = 0; i < order; i++) {
        for (int j = order; j < 2 * order; j++) {
            if(opc==0)
             mat1inv[i][j-order]=matrix[i][j];
            else
             mat2inv[i][j-order]=matrix[i][j];
        }
    }

    return;
}

void leer(char entrada[]){
  char *secuencia;
  FILE *ptrs;
  ptrs= fopen(entrada,"r");
  if(ptrs==NULL){
    printf("No hay datos");
    exit(1);
  }else{
      while (fgets((char*)&archivo, sizeof(archivo), ptrs)){
            printf("%s",archivo);
      }
        fclose(ptrs);
   }
}

void *suma(void *arg){
  FILE* fichero;
  fichero = fopen("matrices/suma.txt", "w");
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      fprintf(fichero, "%d ", (int)(mat1[i][j]+mat2[i][j]));
    }
    fprintf(fichero,"\n");
  }
  fclose(fichero);
  return NULL;
}

void *resta(void *arg){
  FILE* fichero;
  fichero = fopen("matrices/resta.txt", "w");
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      fprintf(fichero, "%d ", (int)(mat1[i][j]-mat2[i][j]));
    }
    fprintf(fichero,"\n");
  }
  fclose(fichero);
  return NULL;
}

void *multipli(void *arg){
  FILE* fichero;
  fichero = fopen("matrices/multi.txt", "w");
  int i, j, k;
  for (i = 0; i < 10; i++){
    for (j = 0; j < 10; j++){
        multi[i][j] = 0;
        for (k = 0; k < 10; k++)
            multi[i][j] += mat1[i][k]*mat2[k][j];
    }
  }
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      fprintf(fichero, "%d ", (int)(multi[i][j]));
    }
    fprintf(fichero,"\n");
  }
  fclose(fichero);
  return NULL;
}

void *traspuesta(void *arg){
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      mat1t[i][j] = mat1[j][i];
      mat2t[i][j] = mat2[j][i];
    }
  }
  FILE* fichero;
  fichero = fopen("matrices/traspuesta.txt", "w");
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      fprintf(fichero, "%d ", (int)(mat1t[i][j]));
    }
    fprintf(fichero,"\n");
  }
  fprintf(fichero,"\n");
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      fprintf(fichero, "%d ", (int)(mat2t[i][j]));
    }
    fprintf(fichero,"\n");
  }
  fclose(fichero);
  return NULL;
}

void *inversa(void *arg){
  InverseOfMatrix(mat1,10,0);
  InverseOfMatrix(mat2,10,1);
  FILE* fichero;
  fichero = fopen("matrices/inversa.txt", "w");
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      fprintf(fichero, "%.3f ", (float)(mat1inv[i][j]));
    }
    fprintf(fichero,"\n");
  }
  fprintf(fichero,"\n");
  for(int i=0; i<10; i++) {
    for(int j=0; j<10; j++) {
      fprintf(fichero, "%.3f ", (float)(mat2inv[i][j]));
    }
    fprintf(fichero,"\n");
  }
  fclose(fichero);
  return NULL;
}

void *hilocentral(void *arg){
  pthread_t id_hilo;
  pthread_create(&id_hilo,NULL,(void*)suma,NULL);
  pthread_create(&id_hilo,NULL,(void*)resta,NULL);
  pthread_create(&id_hilo,NULL,(void*)multipli,NULL);
  pthread_create(&id_hilo,NULL,(void*)traspuesta,NULL);
  pthread_create(&id_hilo,NULL,(void*)inversa,NULL);
  return NULL;
}

int main(void){

  pthread_t id_hilo;
  pthread_create(&id_hilo,NULL,(void*)hilocentral,NULL);
  pthread_join(id_hilo,NULL);
  printf("\n=== Suma ===\n");
  leer("matrices/suma.txt");
  printf("\n=== Resta ===\n");
  leer("matrices/resta.txt");
  printf("\n=== Multiplicacion ===\n");
  leer("matrices/multi.txt");
  printf("\n=== Traspuesta ===\n");
  leer("matrices/traspuesta.txt");
  printf("\n=== Inversa ===\n");
  leer("matrices/inversa.txt");
  t_fin = clock();
	secs = (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
	printf("%.16g segundos\n", secs * 1000.0);
  return 0;
}
