
#include <stdio.h>
int calcular_unos(int num);
int main(){
	int value = 0;
	int output = 0;
	do{
		printf("Introduzca un valor positivo: \n");
		scanf("%d", &value);
		if(value < 1){
			printf("El numero introducido no es valido.\n");	
			
		}
	}while(value < 1);
	output = calcular_unos(value);
	printf("Su numero en binrio tiene %d unos.\n", output);
	return 0;
}
int calcular_unos(int num){
	int i = 1;
	int output = 1;
	while(num > 1){
		if(num%2 == 1){
			output += 1;	
		
		}
		num = num/2;
	
	}
	return output;
	
}
