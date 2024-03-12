//Realice un programa sumaElementos.c en lenguaje C cuya función principal
//llame a una función que inicializa un vector que se le pasa como argumento,
//cuyo tamaño es de 10 elementos, con valores aleatorios entre 1 y 10. Después, la función principal llamará a una función suma, la cualdado un vector
//de 10 elementos que se le pasa como argumento, devuelve la suma de todos
//ellos. La función principal imprimirá la suma devuelta por la función y todos los
//elementos del vector. NOTA: Hay que utilizar bucles.
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
void fillRndmNums(int rndmNums[]);
int sumElemArray(int array[]);
int main(){
	int rndmNums[10];
	fillRndmNums(rndmNums);
	int sum = sumElemArray(rndmNums);
	printf("Suma de los 10 numeros aleatorios: %d\n", sum);
	printf("Elementos sumados: \n");
	for (int i = 0; i < 10; i++){
		printf("%d ", rndmNums[i]);
		
	}
	return 0;
}
void fillRndmNums(int rndmNums[]){
	srand(time(NULL));
	for (int i = 0; i < 10; i ++){
		rndmNums[i] = rand() % (9+1) +1;
	
	}

}
int sumElemArray(int array[]){
	int sum = 0;
	for (int i = 0; i < 10; i++){
		sum += array[i];
	}
	return sum;
}
