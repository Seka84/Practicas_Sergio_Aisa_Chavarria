
#include <stdio.h>
int calcula_multiplos_intervalo(int n1, int n2, int n3);
int main(){
	int n1, n2, n3;
	int output = 0;
	printf("Introduzca tres numeros, siendo el el primero menor que el segundo y positivo el tercero: \n");
	do{
		scanf("%d", &n1);
		scanf("%d", &n2);
		scanf("%d", &n3);
		if(n1>=n2 || n3 <1){
			printf("Valor incorrecto.\n");
		}
	}while(n1>=n2 || n3 <1);
	output = calcula_multiplos_intervalo(n1, n2, n3);
		printf("El numero de multiplos de su tercer numero (n3) comprendido entre el primero y el segundo es %d", output);
	return 0;
}
int calcula_multiplos_intervalo(int n1, int n2, int n3){
	int numMultiplos = 0;
	for(int i = n1; i <= n2; i++){
		if(i%n3 == 0){
		 numMultiplos += 1;
		}
	
	}
	return numMultiplos;

}
