//Realice un programa cadena.c en lenguaje C que lea una cadena de máximo 100 caracteres y llame a una función invierte que invierte la cadena,
//guardándola en otra cadena que también se le pasa como argumento. La función main imprimirá la cadena resultante. La definición de la función será así:
//void invierte(char *cadenaOrigen, char *cadenaDestino)./
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void invierte(char *cadena, char *plain);
int main(){
	char *cadena = (char*)malloc(sizeof(char)*100);
	char *plain = (char*)malloc(sizeof(char)*100);
	int i = 0;
	printf("Introduzca su cadena de caracteres (1-100 caracteres):\n\n");
	fgets(cadena, 100, stdin);
	printf("Invirtiendo...\n\n");
	invierte(cadena, plain);
	printf("Resultado: \n");
	printf("%s", plain);
	printf("\n FIN \n");
	free(cadena);
	free(plain);
	
	return 0;
}
void invierte(char *cadena, char *plain){
	int length = strlen(cadena);
	for(int i = 0; i < length; i++){
		plain[i] = cadena[length - i - 1];	
	
	}
}

