//Realice un programa suma.c en lenguaje C cuya función principal llame a
//una función que inicializa la matriz que se le pasa como argumento, cuyo tamaño es 6x6, con números aleatorios entre 1 y 10. Luego la función principal
//llamará a una función suma que recibe una matriz como argumento y devuelve
//la suma de todos los elementos de la matriz. La función principal imprimirá la
//matriz una vez inicializada por la función y después el resultado devuelto por la
//función suma.

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int suma(int matrix[6][6]);
void initMatrix(int matrix[6][6]);
int main(){
	int matrix[6][6];
	int output = 0;
	printf("Inicializando matriz 6x6...\n\n");
	initMatrix(matrix);
	for(int i = 0; i < 6; i++){
		printf("(");
		for(int j = 0; j < 6; j++){
			printf("%d ",matrix[i][j]);
		}
		printf(")\n");
	}
	printf("\n");
	printf("Sumando contenido de la matriz...\n");
	output = suma(matrix);
	printf("RESULTADO: %d.\n", output);
	return 0;
}
void initMatrix(int matrix[6][6]){
	srand(time(NULL));
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			matrix[i][j] = rand() % 10 + 1;
		}
	}
}
int suma(int matrix[6][6]){
	int suma = 0;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			suma += matrix[i][j];
		}
	}
	return suma;
}



















