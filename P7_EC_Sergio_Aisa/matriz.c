//Realice un programa matriz.c en lenguaje C cuya función principal llame a
//una función que inicializa la matriz que se le pasa como argumento, cuyo tama
//ño es 5x5, con números aleatorios entre 3 y 15. La función principal imprimirá
//la matriz una vez inicializada por la función.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arrayInit (int array[]);
int main (){
	int array[5][5];
	arrayInit (array);
	return 0;
}
void arrayInit (int array[]){
	srand(time(NULL));
	for(int i )
}
