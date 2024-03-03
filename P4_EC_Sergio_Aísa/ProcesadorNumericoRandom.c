
#include <stdio.h>
void imprime_pares_intervalo(int i, int j);
int main () {
	int primerNum, segundoNum;
	do{
		printf("Introduzca dos numeros enteros: \n");
		scanf("%d" , &primerNum);
		scanf("%d", &segundoNum);
		if(primerNum > segundoNum){
			printf("Los numeros %d y %d introducidos en ese orden no cumplen con la condicion requerida.\n", primerNum, segundoNum);
		}else{
			imprime_pares_intervalo(primerNum, segundoNum);
			printf("\nFin del programa. \n");
		}
		
	}while (primerNum > segundoNum);
	return 0; 


}
void imprime_pares_intervalo(int i, int j){
	int primerNum = i;
	int segundoNum = j;
	int clipboardNum =0 ;
	printf("\n Lista de numero pares generada: ");
		clipboardNum = primerNum;
		while(clipboardNum <= segundoNum){
			if(clipboardNum % 2 == 0){
				printf("%d ", clipboardNum);
			}	
			clipboardNum += 1;
			}	
}
