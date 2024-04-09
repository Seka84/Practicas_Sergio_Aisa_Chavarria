#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void minimoFilas(int *matriz, int *vector, int n, int m);
void inicializarmatriz(int *matriz, int n, int m);

int main (){
    int n, m;
    int *matriz, *vector;
    
    printf("Introduzca las filas y columnas de la matriz a generar: \n");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("\n");
    
    matriz = (int *)malloc(n * m * sizeof(int));
    vector = (int *)malloc(n * sizeof(int));
    
    inicializarmatriz(matriz, n, m);
    minimoFilas(matriz, vector, n, m);
    
    printf("Matriz generada: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", *(matriz + i * m + j));
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Los mínimos de cada fila son: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", *(vector + i));
    }
    printf("\n");
    
    free(matriz);
    free(vector);
    return 0;
}

void inicializarmatriz(int *matriz, int n, int m){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            *(matriz + i * m + j) = rand() % 21 - 10; // números aleatorios entre -10 y 10
        }
    }
}

void minimoFilas(int *matriz, int *vector, int n, int m){
    for(int i = 0; i < n; i++){
        int min = matriz[i * m]; // Inicializar min con el primer elemento de la fila
        for(int j = 1; j < m; j++){
            if(matriz[i * m + j] < min){
                min = matriz[i * m + j];
            }
        }
        vector[i] = min;
    }
}

