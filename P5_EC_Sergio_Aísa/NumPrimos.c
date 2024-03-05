

#include <stdio.h>
int calcular_divisores (int num);
int calcular_si_es_primo (int num);
int main (){

	int value = 0;
	int esPrimo = 1;
	do{
		printf("Introduzca un valor positivo del cual quiera saber su caracter (primo o compuesto): \n");
		scanf("%d", &value);
		if(value < 1){
			printf("El numero introducido no es valido.\n");	
			
		}
	}while(value < 1);
	
	esPrimo = calcular_si_es_primo(value);
	if(esPrimo == 0){
		printf("Su no numero es primo.\n");
	
	}else if(esPrimo == 1){
		printf("Su numero es primo.\n");
	}

	
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
int calcular_si_es_primo (int num){
	int esPrimoFuncion = 0;
	if(calcular_divisores(num) < 3){
		esPrimoFuncion = 1;
	
	}
	return esPrimoFuncion;
}
