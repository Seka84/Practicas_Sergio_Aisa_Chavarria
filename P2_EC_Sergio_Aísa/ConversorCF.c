#include <stdio.h>
int main(){	
	float temperaturaC = 0;
	printf("Introduzca la temperatura en Cº que desee convertir a Fº");
	scanf("%f",&temperaturaC );
	float temperaturaF = 1.8*temperaturaC + 32;
	printf("Resultado de la conversion Cº -> Fº : %f", temperaturaF);
	return 0;





}
