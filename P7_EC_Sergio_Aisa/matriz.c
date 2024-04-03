//Realice un programa matriz.c en lenguaje C cuya función principal llame a
//una función que inicializa la matriz que se le pasa como argumento, cuyo tama
//ño es 5x5, con números aleatorios entre 3 y 15. La función principal imprimirá
//la matriz una vez inicializada por la función.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arrayInit (int array[5][5]);
int main (){
	int array[5][5];
	arrayInit (array);
	for(int i = 0; i < 5; i++ ){
		printf("(");
		for (int j = 0; j < 5 ; j++){
			printf("%d ", array[i][j]);
		}
		printf(")\n");
	}
	printf("\n");
	return 0;
}
void arrayInit (int array[5][5]){
	srand(time(NULL));
	for(int i = 0; i < 5; i++ ){
		for (int j = 0; j < 5 ; j++){
			array[i][j] = rand() % 12 + 3;
		}
	
	}
}
