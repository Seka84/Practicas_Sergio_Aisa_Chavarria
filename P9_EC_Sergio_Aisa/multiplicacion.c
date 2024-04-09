//Realice un programa multiplicacion.c en lenguaje C que tenga 1 función
//multiplica a la cual se le pasan 3 matrices de tamaño nxn (A, B y C) y calcula
//el producto de la matriz A por la matriz B almacenando el resultado en la matriz
//C. La función principal inicializará la matriz con números aleatorios entre 1 y
//10 (se puede usar una función para inicializar la matriz). La función principal
//imprimirá la matriz resultado
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> 

void multiplica(int *A, int *B, int *C, int n);
void inicializarmatriz(int *matriz, int n);
int main(){
	int *A, *B, *C;
	int n = 0;
	printf("Introduzca el lado de su matriz cuadrada: \n");
	scanf("%d", &n);
	printf("\n");

	A = (int *)malloc(n * n * sizeof(int));
	B = (int *)malloc(n * n * sizeof(int));
	C = (int *)malloc(n * n * sizeof(int));
	
	inicializarmatriz(A, n);
	//he puesto sleep debido a que las matrices se generaban iguales, asi la seed del random cambia tras esos dos segundos. No se me ocurria otra forma
	sleep(2);
	inicializarmatriz(B, n);
	
	printf("Matriz A generada: \n");
	multiplica(A, B, C, n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		    printf("%d ", *(A + i * n + j));
		}
		printf("\n");
	}
	printf("\n");

	printf("Matriz B generada: \n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		    printf("%d ", *(B + i * n + j));
		}
		printf("\n");
	}
	printf("\n");

	printf("Matriz C resultado: \n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		    printf("%d ", *(C + i * n + j));
		}
		printf("\n");
	}
	printf("\n");

	free(A);
	free(B);
	free(C);
	return 0;	

}
void multiplica(int *A, int *B, int *C, int n){
	int aux = 0;
	for (int i = 0; i < n; i++){
		for(int j  = 0; j < n; j++){
			aux = 0;
			for(int k = 0; k < n; k++){
				 aux += *(A + i * n + k) * *(B + k * n + j);
			}
			*(C + i * n + j) = aux;
		}
	}
}
void inicializarmatriz(int *matriz, int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            *(matriz + i * n + j) = rand() % 10 + 1 ;
        }
    }
}

