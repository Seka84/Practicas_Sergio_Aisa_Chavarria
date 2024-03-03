//Librería que contiene las funciones scanf y printf
#include <stdio.h>
//Función principal del programa
int main ()
{
// Este programa imprime por pantalla un número leído por teclado
// Declaro las variables de mi función
int Num;
//Sustituyo la función ESCRIBA “cadena” por printf
printf("Escribe un número: ");
//Sustituyo la función LEA Num por scanf (“ %d”, &variableEntera);
scanf(" %d", &Num); //Guarda el número leído en la variable Num
//Sustituyo la función ESCRIBA “cadena” por printf
printf("El dato introducido es: %d \nFin del algoritmo", Num);
//Sustituyo la función ESCRIBA Num por printf(“ %d”, variableEntera);

//Sustituyo la función ESCRIBA “cadena” por printf

//Fin del programa
return 0;
}
