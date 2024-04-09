#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//Realice un programa minimo.c en lenguaje C que tenga 1 función calculaminimo
//a la cual se le pasa una matriz de n filas y m columnas de números enteros y devuelve el valor mínimo de dicha matriz. Además tiene una función
//inicializamatriz que generará nxm números aleatorios entre 1 y 10 y los
//almacenará en una matriz de n filas y m columnas que se le pasa como argumento (también se le tendrá que pasar el número de filas y el //número de
//columnas). La función main leerá los números n y m por teclado, reservará memoria para el puntero y llamará a la función inicializamatriz que rellenará la
//matriz con nxm enteros aleatorios entre 1 y 10. A continuación, llamará a la función calculaminimo e imprimirá el valor que le devuelva la función (el mínimo)
//y la matriz de números.
int calculaminimo(int *matriz, int n, int m);
void inicializarmatriz(int *matriz, int n, int m);
int main (){
	int n,m;
	int *matriz;
	
	printf("Introduzca las filas y columnas de la matriz a generar: \n");
	scanf("%d", &n);
	scanf("%d", &m);
	printf("\n");
	matriz = (int *)malloc(n*m*sizeof(int));
	inicializarmatriz(matriz, n, m);
	int output = calculaminimo(matriz, n, m);
	printf("Matriz generada: \n");
	for (int i = 0; i < n*m +1; i++){
		printf("%d ", *(matriz+i));
		if(i%m==0){
			printf("\n");
		}
	}
	printf("\n");
	printf("El minimo de su matriz es %d \n", output);
	
	return 0;
	
}
void inicializarmatriz(int *matriz, int n, int m){
	srand(time(NULL));
	for(int i = 0; i < (n*m)+1; i++){
		*(matriz+i) = rand() % 10 + 1;
	}

}
int calculaminimo(int *matriz, int n, int m){
	int min = 10;
	for(int i = 1; i < (n*m); i++){
		if(*(matriz + i) < min){
			min = *(matriz + i);
		}
	}
	
	return min;
}