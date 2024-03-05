#include <stdio.h>
int calcular_divisores (int num);
int main (){
	int value = 0;
	int numDiv = 1;
	do{
		printf("Introduzca un valor positivo cuyo numero de divisores quiera calcular: \n");
		scanf("%d", &value);
		if(value < 1){
			printf("El numero introducido no es valido.\n");	
			
		}
	}while(value < 1);
	
	numDiv = calcular_divisores(value);
	printf("Su numero tiene %d divisores", numDiv);
	
	return 0;
}
int calcular_divisores (int num){
	int value = 0;
	for(int i = 1; i < num+1 ; i++){
		if(num % i == 0){
			value += 1;		
		}
	}
	return value;
}
