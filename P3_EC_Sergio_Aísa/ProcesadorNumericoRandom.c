
#include <stdio.h>
int main () {
	int primerNum, segundoNum, clipboardNum;
	printf("Introduzca dos numeros enteros: \n");
	scanf("%d" , &primerNum);
	scanf("%d", &segundoNum);
	if(primerNum > segundoNum){
		printf("Los numeros %d y %d introducidos en ese orden no cumplen con la condicion requerida.\n", primerNum, segundoNum);
	}else{
		printf("\n Lista de numero pares generada: ");
		clipboardNum = primerNum;
		while(clipboardNum <= segundoNum){
			if(clipboardNum % 2 == 0){
				printf("%d ", clipboardNum);
			}	
			clipboardNum += 1;
			}
	}
	printf("\n");
	return 0;


}
