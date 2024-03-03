#include <stdio.h>
#include <math.h>
int main () {
	
	int elector;
	float volumen;
	printf("Elija entre cono (1) y ortoedro (2) para calcular su volumen: \n");
	scanf("%d", &elector);

	switch(elector) {
		case 1:
		float radio, alturaV;
		printf("Introduzca  el radio de la base de su cono: ");
		scanf("%f", &radio);
		printf("Introduzca la altura de su cono: ");
		scanf("%f", &alturaV);
		volumen = radio * radio * alturaV * M_PI * (1.0/3.0);
		printf("El volumen del cono resultante de las variables proporcionadas es igual a %f", volumen);
		break;
		
		case 2:
		float lado1, lado2, alturaO;
		printf("Introduzca el primer lado de la base de su ortoedro: ");
		scanf("%f", &lado1);
		printf("Introduzca el segundo lado de la base de su ortoedro: ");
		scanf("%f", &lado2);
		printf("Introduzca la altura de su ortoedro: ");
		scanf("%f", &alturaO);
		volumen = lado1 * lado2 * alturaO;
		printf("El volumen del ortoedro resultante de las variables proporcionadas es igual a %f", volumen);
		break;
		
		default:
		printf("El numero introducido es invalido, diferente de [1,2]");

			}

	return 0;
}
