//Realice un programa sumaColumnas.c en lenguaje C cuya función principal
//llame a una función que inicializa la matriz que se le pasa como argumento,
//cuyo tamaño es 3x6, con números aleatorios entre 1 y 10. Luego la función
//principal llamará a una función sumaColumnas que recibe una matriz y un vector
//como argumento y devuelve la suma de todos los elementos de cada columna
//de la matriz. La función principal imprimirá la matriz una vez inicializada por la
//función y después el resultado de la suma de las columnas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initMatrix(int matrix[3][6]);
void sumaColumnas(int output[6], int matrix[3][6]);
int main(){
	int matrix[3][6];
	int output[6];
	printf("Inicializando matriz 3x6...\n\n");
	initMatrix(matrix);
	for(int i = 0; i < 3; i++){
		printf("(");
		for(int j = 0; j < 6; j++){
			printf("%d ",matrix[i][j]);
		}
		printf(")\n");
	}
	printf("\n");
	printf("Sumando contenido de la matriz...\n");
	sumaColumnas(output, matrix);
	printf("RESULTADO: ");
	for(int i = 0; i < 6; i++){
		printf("%d ", output[i]);
	
	}
	printf(".\n");
	return 0;

}
void initMatrix(int matrix[3][6]){
	srand(time(NULL));
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 6; j++){
			matrix[i][j] = rand() % 10 + 1;
		}
	}

}
void sumaColumnas(int output[6],int matrix[3][6]){
	for(int i = 0; i < 6; i++){
		int node = 0;
		for(int j = 0; j < 3; j++){
			node += matrix[j][i];
		}
		output[i] = node;
	}







}












