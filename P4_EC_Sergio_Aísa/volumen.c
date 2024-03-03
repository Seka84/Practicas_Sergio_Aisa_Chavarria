#include <stdio.h>
#include <math.h>
void menu(int i);
int main () {
	
	int elector;
	
	
	printf("Elija entre cono (1) y ortoedro (2) para calcular su volumen. \n Pulse (3) para salir del programa. \n");	
	scanf("%d", &elector);
	menu(elector);

	printf("Programa finaliizado. \n");

	return 0;
}
void menu(int i){
	int elector = i;
	float volumen, radio, alturaV, lado1, lado2, alturaO;
	
	do{
		printf("Elija entre cono (1) y ortoedro (2) para calcular su volumen. \n Pulse (3) para salir del programa. \n");
		scanf("%d", &elector);
		switch(elector) {
			case 1:
			
			printf("Introduzca  el radio de la base de su cono: ");
			scanf("%f", &radio);
			printf("Introduzca la altura de su cono: ");
			scanf("%f", &alturaV);
			volumen = radio * radio * alturaV * M_PI * (1.0/3.0);
			printf("El volumen del cono resultante de las variables proporcionadas es igual a %f \n", volumen);
			break;
			
			case 2:
			
			printf("Introduzca el primer lado de la base de su ortoedro: ");
			scanf("%f", &lado1);
			printf("Introduzca el segundo lado de la base de su ortoedro: ");
			scanf("%f", &lado2);
			printf("Introduzca la altura de su ortoedro: ");
			scanf("%f", &alturaO);
			volumen = lado1 * lado2 * alturaO;
			printf("El volumen del ortoedro resultante de las variables proporcionadas es igual a %f \n", volumen);
			break;
			
			case 3:
			printf("Saliendo del programa...\n");
			break;
			
			default:
			printf("El numero introducido es invalido, diferente de [1,2,3]");

				}
		}while(elector != 3);

}


