#include <stdlib.h>
#include <stdio.h>

int calcularmaximo(int *puntero, int legth);
int main (){
	int n = 0;
	int j = 0;
	printf("Indique el numero de cifras cuyo maximo quiere calcular: \n");
	scanf("%d", &n);
	int *puntero_numeros;
	puntero_numeros = (int *)malloc(n*sizeof(int));
	printf("Introduzca los %d elementos cuyo maximo quiere calcular: \n", n);
	for (int i = 0; i < n; i++){
		scanf("%d", &j);	
		*(puntero_numeros+i) = j;
	}
	int out = calcularmaximo(puntero_numeros, n);
	printf("Conjunto introducido: ");
	for (int i = 0; i < n; i++){
		printf("%d ", *(puntero_numeros+i));
	}
	printf(".\nEl maximo del conjunto introducido es %d. \n", out);
	
	return 0;
}
int calcularmaximo(int *puntero, int lenght){
	int max = 0;
	for (int i = 1; i < lenght; i++){
		if(*(puntero+i) > *(puntero+i-1)){
			max = i;
		}	
	}
	return *(puntero+max);
}
