#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ESTRUCTURAS
typedef struct tableroMenor{
    int matrices[3][3];
} tableroMenor;

typedef struct Sudoku{
    tableroMenor tableroCompleto[3][3];
} sudoku;

//PROTOTIPOS 
void llenarSudoku(sudoku sudokuCompleto);
void imprimirSudoku(sudoku sudokuCompleto);
void verificarTablero(sudoku sudokuCompleto);

//MAIN
int main(){
    sudoku tablero;

    time_t t;
    srand((unsigned) time(&t));

    llenarSudoku(tablero);
    imprimirSudoku(tablero);

    return 0;
}

//FUNCIONES
void llenarSudoku(sudoku sudokuCompleto){

    for(int z=0; z<3; z++){
        for(int w=0; w<3; w++){

            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    sudokuCompleto.tableroCompleto[z][w].matrices[i][j] = 5;
                }
            } 

        }
    }
    
}

void imprimirSudoku(sudoku sudokuCompleto){

    for(int z=0; z<3; z++){
        for(int w=0; w<3; w++){

            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    printf("%d  ", sudokuCompleto.tableroCompleto[z][w].matrices[i][j]);
                }
                printf("|\n");
            } 
			printf("\n");
        }
    }

}

void verificarTablero(sudoku sudokuCompleto){
    int num=0;
    
    //COMPROBAR MATRIZ 3X3
    for(int z=0; z<3; z++){
    	for(int w=0; w<3; w++){
    		
    		for(int i=0; i<3; i++){
    			for(int j=0; j<3; j++){
    				
    				for(int n=1; n<10; n++){
    					if(sudokuCompleto.tableroCompleto[z][w].matrices[i][j] == n){
    						num+=1;
    					}
    					
    				}
    				
    			}
    		}
    		
    	}
    }
    
    //COMPROBAR FILA 
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
    		
			for(int n=1; n<10; n++){
    			if(sudokuCompleto.tableroCompleto[j][i].matrices[j][i] == n){
    				num+=1;
				}

    		}
    	} 
	}
    
    //COMPROBAR COLUMNA 
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
    		
    		for(int n=1; n<10; n++){
    			if(sudokuCompleto.tableroCompleto[i][j].matrices[i][j] == n){
    				num+=1;
   				}
   			}
    	}    

	} 
	
	//SALIDA
	if(num==3){
		printf("Es un sudoku");
	}
	else{
		printf("No es un sudoku");	
	}
	
}

/*

Mario Jesús Chan Zurita 

*/