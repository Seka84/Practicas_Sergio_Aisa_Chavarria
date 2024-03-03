#include <stdio.h>
int factorial(int num);
int main () {
	printf("Introduzca el numero cuyo factorial quiera calcular: \n");
	int num, resultado;
	scanf("%d", &num);
	resultado = factorial(num);
	if(resultado == -1){
		printf("Introduzca un numero positivo porfavor.\n");
	}else{
		printf("Resultado: %d", resultado);
	}

}
int factorial(int num){
	int total = 1;
	
		if(num < 0){
			return -1;
		}
		else{
			for(int i = num; i > 0; i--){
				total = total * i;
			}
		}
			return total;
		}
		
		


