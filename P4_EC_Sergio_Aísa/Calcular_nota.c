
#include <stdio.h>
void calcula_nota();
int main (){

	int num;

	printf("Escribe la nota numérica: ");

	scanf(" %d", &num); 

	calcula_nota(num);
	
	return 0;
}
void calcula_nota (int nota){
	int num = nota;
	if ((num == 5) || (num == 6)){

		printf("Aprobado");
	}
	else{
		if ((num == 7) || (num == 8)){

			printf("Notable");
		}
		else{
			if ((num == 9) || (num == 10)){

				printf("Sobresaliente");
				}
			else{
				if ((num>=0) && (num<5)){

					printf("Suspenso");
				}
				else {

					printf("Error, tiene que estar entre 0 y 10");
		}
	}
	}
	}

}
