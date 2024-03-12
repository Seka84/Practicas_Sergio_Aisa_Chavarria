//Realice un programa identidad.c en lenguaje C cuya función principal llame a una función que inicializa la matriz que se le pasa como argumento, cuyo
//tamaño es 9x9, con la matriz identidad (en la diagonal 1s y 0s en el resto). La
//función principal imprimirá la matriz una vez inicializada por la función. NOTA:
//Hay que utilizar bucles.
#include <stdio.h>
void identity(int array[9][9]);
int main (){
	int arrayNineXNine[9][9];
	identity(arrayNineXNine);
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			printf("%d ", arrayNineXNine[i][j]);
		}
		printf("\n");	
	}

	return 0;
}
void identity(int array[9][9]){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if(i == j){
				array[i][j] = 1;
			}else{
				array[i][j] = 0;
			}
		}
		
	}


}
