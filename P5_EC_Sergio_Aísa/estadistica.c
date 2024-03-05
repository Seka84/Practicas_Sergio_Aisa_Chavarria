
#include <stdio.h>
#include <math.h>
int menu();
float media();
float desviacion_tipica();
int main (){
	float value = 0;
	int numDiv = 1;
	int selector = 0;
	selector = menu();
	switch(selector){
		case 1: 
		value = media();
		printf("Resultado:  %f", value);
		break;
		
		case 2: 
		value = desviacion_tipica();
		printf("Resultado:  %f", value);
		break;
		
		case 3: 
		printf("Saliendo...");
		break;
		
		default: 
		printf("Algo no ha ido como se esperaba.\n");
		break;
	}
		
	
	return value;
}
int menu(){
	int selector = 0;
	do{
		printf("Seleccione opcion: \n (1)Calcular media\n (2)Calcular desviacion tipica\n (3)Salir de menu\n Opciones 1 y 2 requieren 5 operandos\n");
		scanf("%d", &selector);
		if(selector < 1 || selector > 3){
			printf("Opcion invalida...\n");
		}

	}while(selector < 1 || selector > 3);
	return selector;
}
float media(){
	int n1, n2, n3, n4, n5;
	float media;
	printf("Introduzca 5 numeros con los que calcular la media");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	scanf("%d", &n5);
	media = (n1+n2+n3+n4+n5)/5.0;
	return media;
}
float desviacion_tipica(){
	int n1, n2, n3, n4, n5;
	float media, output;
	printf("Introduzca 5 numeros con los que calcular la media");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	scanf("%d", &n5);
	media = (n1+n2+n3+n4+n5)/5.0;
	output = sqrt((pow(n1-media,2) + pow(n2-media,2) + pow(n3-media,2) +pow(n4-media,2) + pow(n5-media,2))/5.0) ;
	return output;
}
