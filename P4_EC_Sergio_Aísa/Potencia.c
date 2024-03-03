#include <stdio.h>
void potencia(int base, int exponente);
int main ()
{
int base, exponente;
	printf("Escribe un número (base): ");
	scanf(" %d", &base);
	printf("Escribe un número (exponente): ");
	scanf(" %d", &exponente); 
	potencia(base, exponente);

	

	return 0;
}
void potencia (int b, int exp){
	int base = b;
	int exponente = exp;
	int i, pot;
	if ((base >= 1) && (exponente >= 1)){

		pot = 1;
		i = 1;
		while (exponente >= 1){
		pot = pot * base;
		exponente = exponente - 1;
		}

		printf("La potencia es: %d \n", pot);
		}
	else{

		printf("Error, la base y el exponente han de ser mayores o iguales a 1\n");
	}
	


}
