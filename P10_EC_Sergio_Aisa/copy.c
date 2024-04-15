//Realice un programa copia.c en lenguaje C que lea una cadena de máximo
//100 caracteres e imprima por pantalla:
//su longitud. Para ello usar la función strlen.
//si es igual a la cadena compara. Para ello usa la función strcmp.
//concaténale la cadena añadida. Para ello usa la función strcat.
//la letra que ocupa la posición 4 (índice 4 del vector)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	printf("Introduza su cadena de caracteres: \n");
	char *cadena;
	int out1 = 0;
	cadena = (char*)malloc(sizeof(char) * 100);
	fgets(cadena, 100, stdin);
	if (cadena[strlen(cadena) - 1] == '\n'){
        	cadena[strlen(cadena) - 1] = '\0';
        }
	printf("Cadena: %s \n", cadena);
	printf("Longitud de la cadena: ");
	out1 = strlen(cadena);
	printf("%d\n", out1);
	
	if(strcmp(cadena,"compara") == 0){
		printf("Tu cadena es igual a ''compara''\n");
	}else{
		printf("Tu cadena NO es igual a ''compara''\n");
	}
	printf("Concatenando...\n");
	strcat(cadena,"añadida");
	printf("%s\n", cadena);
	printf("4ª posicion de la cadena: %c\n", *(cadena+3));	
	return 0;
}
