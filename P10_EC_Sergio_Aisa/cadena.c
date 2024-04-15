//Realice un programa cadena.c en lenguaje C que lea una cadena de tantos
//caracteres como indique el usuario y llame a una función quitaespacios que
//elimine los espacios en blanco de la cadena y la guarde en otra cadena. La
//función main imprimirá la cadena resultante. La definición de la función será
//así: void quitaespacios(char *cadena, char *cadenasin)
//Cuando trabajamos con punteros, podemos acceder a sus posiciones como puntero[i], al igual que hemos hecho con los vectores.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void quitaespacios(char *cadena, char *cadenasin);
int main (){
	printf("Introduzca la longitud de su cadena\n");
	int length = 0;
	scanf("%d", &length);
	while (getchar() != '\n');
	char *cadena;
	char *cadenasin;
	cadena = (char*)malloc(sizeof(char)*length);
	cadenasin = (char*)malloc(sizeof(char)*length);
	printf("Introduzca la cadena\n");
	fgets(cadena, length, stdin);
	if (cadena[strlen(cadena) - 1] == '\n'){
        	cadena[strlen(cadena) - 1] = '\0';
        }
	quitaespacios(cadena, cadenasin);
	printf("Cadena resultante: %s", cadenasin);
	return 0;
	
}
void quitaespacios(char *cadena, char *cadenasin) {
    int j = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != ' ') {
            cadenasin[j++] = cadena[i];
        }
    }
    cadenasin[j] = '\0';
   }

