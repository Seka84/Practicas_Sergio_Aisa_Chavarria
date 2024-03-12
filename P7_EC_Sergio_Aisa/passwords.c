//Realice un programa passwords.c en lenguaje C que genere contraseñas
//aleatorias de 8 minúsculas. Para ello tiene que contener una función que inicialice un vector de 26 elementos con las 26 letras del //vocabulario inglés (de
//la letra ’a’, con valor ascii 97, a la letra ’z’, con valor ascii 122, sin almacenar la
//’ñ’).
//La función principal llama a esa función y le pasa un vector como argumento,
//en el cual quedan almacenadas las letras. Después, la función principal genera
//8 números aleatorios entre 0 y 25. Cada uno de ellos corresponde con una
//letra, la cual forma una contraseña de 8 letras minúsculas que se guarda en un
//vector de datos de tipo char y tamaño 9.
//Por ejemplo, siendo el vector (a,b,c,d,e,f...z), y generando los aleatorios
//3,2,4,1,0,4,25,24 la contraseña sería dcebaezy.
//Compílalo con el compilador gcc. Después, ejecútalo para comprobar que
//funciona correctamente.
//Para imprimir un vector de char, no es necesario usar un bucle, se puede
//imprimir todo el vector almacenando el carácter ’\0’ al final del vector (en la
//posición siguiente a la última letra, en este caso, en la posición 8) y usando la
//instrucción printf(“ %s”, vector_char);
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initAlphabetArray (char array[]);
int main (){
	char password[9];
	char alphabet[27]; 
	initAlphabetArray(alphabet);
	
	srand(time(NULL));
	for (int i = 0; i < 8; i ++){
		password[i] = alphabet[rand() % 25 +0];
	
	}
	password[8] = '\0';
	printf("\nContraseña generada: \n");
	printf("%s \n", password);
	
	return 0;
}
void initAlphabetArray (char array[]){
	for(int i = 97; i < 123; i++){
		array[i-97] = i;
	}
	array[27] = '\0';
}
