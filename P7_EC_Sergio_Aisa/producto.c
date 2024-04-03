//Realice un programa producto.c en lenguaje C que calcule el producto de
//2 matrices 3x3. Para ello tiene que usar una función inicializa que inicializa
//la matriz que se le pasa como argumento, cuyo tamaño es 3x3, con números
//aleatorios entre 1 y 5 (se llamará 2 veces a la función para inicializar las 2
//matrices). Luego la función principal llamará a una función producto que recibe
//3 matrices como argumento y calcula el producto de dos de ellas almacenando
//el resultado en la tercera. La función principal imprimirá las matrices una vez
//inicializadas por la función y después la matriz resutado del producto. Para ello
//usará la función imprime que dada una matriz 3x3 la imprime por pantalla.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initMatrix(int matrix[3][3]);
void producto(int mA[3][3], int mB[3][3], int mC[3][3]);
int main(){
	int matrixA[3][3], matrixB[3][3], matrixC[3][3];
	initMatrix(matrixA);
	initMatrix(matrixB);
	for(int i = 0; i < 3; i++){
		printf("(");
		for(int j = 0; j < 3; j++){
			printf("%d ",matrixA[i][j]);
		}
		printf(")\n");
	}
	printf("\n"),
	for(int i = 0; i < 3; i++){
		printf("(");
		for(int j = 0; j < 3; j++){
			printf("%d ",matrixB[i][j]);
		}
		printf(")\n");
	}
	producto(matrixA, matrixB, matrixC);
	//comprobar funcnionamiento
	return 0;
}
void initMatrix(int matrix[3][3]{
	srand(time(NULL));
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			matrix[i][j] = rand() % 5 + 1;
		}
	}

}
void producto(int mA[3][3], int mB[3][3], int mC[3][3]){
	for(int i = 0; i < 3; i++){
		
		for (int j = 0; j < 3; j++){
			int pixel = 0;
			for(int k = 0; k < 3; k++){
				pixel += mA[i+k][j+k] * mB[j+k][i+k];
			}
			mc[i][j] = pixel;
		}
	}


}
