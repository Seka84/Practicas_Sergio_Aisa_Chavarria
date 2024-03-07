#Realice un programa volumen.py que calcule volúmenes de figuras geométricas. Tendrá una función menu que presenta un menú para saber si se #quiere
#calcular el volumen de un cono (1) o el volumen de ortoedro (2) o salir (3). Si
#la opción no es 1 ó 2 ó 3 da un mensaje de error y los vuelve a pedir hasta
#que sea un valor correcto. Cuando sea correcto, la función menu devuelve ese
#resultado. Según el valor que se recibe de la función menu, leerá los valores correspondientes para calcular el volumen del cono o del #ortoedro. Después, con
#esos valores, llamará a la función volumen_cono o volumen_ortoedro que dados esos valores que recibe como argumentos, devuelve el volumen #del cono
#o del ortoedro, respectivamente.
import math 
def menu():
	selector = int(input("Introduzca un numero para calcular el volumen de: \n 1) Un cono. \n 2) Un ortoedro \n 3)Salir\n"))
	while(selector < 1 or selector > 3):
		selector = input(int("Error: opcion invalida\n Introduzca un numero para calcular el volumen de: \n 1) Un cono. \n 2) Un ortoedro \n 3)Salir\n"))
	return selector
def volumen_cono(r, a):
	pi = math.pi
	vol = 1/3.0 *r*r*a*pi
	print("Volumen de su cono: ", vol, "\n")
def volumen_ortoedro(b, a, f):
	vol = b*a*f
	print("Volumen de su ortoedro: ", vol, "\n")
	



elector = menu()
if elector == 1:
	radio = int(input("Introduzca el valor del radio de la base de su cono:  \n"))
	altura = int(input("Introduzca el valor la altura de la base de su cono \n"))
	volumen_cono(radio, altura)
elif elector == 2:
	altura = int(input("Introduzca el valor la altura de su ortoedro \n"))
	fondo = int(input("Introduzca el valor la anchura de su ortoedro \n"))
	base = int(input("Introduzca el valor la base de su ortoedro \n"))
	volumen_ortoedro(base, altura, fondo) 
elif elector == 3:
	print("Saliendo del programa...")
else: 
	print("Error inesperado, ejecute de nuevo")
print("Fin del programa")
