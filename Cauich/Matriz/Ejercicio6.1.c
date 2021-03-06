#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 9

void llenadoArreglo(int arr[][N]);
void imprimirArreglo(int arr[][N]);

int main(){
    int array[N][N];
    time_t t;


srand((unsigned) time(&t));

llenarArreglo(array);
imprimirArreglo(array);


return 0;
}

//Asigna valores a la matriz
void llenarArreglo(int arr[][N]){
    for(int i =0; i<N; i++){
        for(int j=0; j<N; j++){
        arr[i][j]= rand() %10; 
        }
    }
}

//Imprime la matriz (Sección 3 Ascendente)
void imprimirArreglo(int arr[][N]){
  for(int i=(N-1); i>=0; i--){
      for(int j=0; j<N; j++){
         if(j>=i && i+j>=(N-1)){
            printf("%d ", arr[i][j]);
          }  
      }
        printf("\n");
    }
}