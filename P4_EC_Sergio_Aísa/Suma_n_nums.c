
#include <stdio.h>
int suma_n_primeros_nums(int n);
int main (){

	int num, total, i;

	printf("Escribe cuantos números quieres sumar: ");

	scanf("%d", &num); 
	suma_n_primeros_nums(num);

return 0;
}

int suma_n_primeros_nums(int n){
	int num = n;
	int total, i;
	total = 0;
	i = 1;
	if (num >= 1) {

		while (i <= num){

		total = total + i;
		i = i + 1;
		}

		printf("La suma es: %d \n", total);
	}
	else{

		printf("Error, el número ha de ser mayor o igual a 1");
	}

}
