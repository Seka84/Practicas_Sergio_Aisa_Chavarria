#Escribe en un archivo con extensión .py un programa potencia que lea dos
#valores enteros positivos (base y exponente), comprueba que sean positivos y
#si no da error hasta que lo sean. Luego se lo pasará a una función potencia que
#recibe esos números y devuelve el resultado de elevar la base al exponente.


def potencia (base,exponente):
	pot = 1
	while (exponente >= 1):
		pot = pot * base
		exponente = exponente - 1
	return	pot


base = int(input("Introduzca un base positiva: \n"))
expo = int(input("Ahora el exponente: \n"))
while(base < 0 or expo < 0):
	print("Valores invalidos, introduzca valores positivos porfavor")
	base = int(input("Introduzca un base positiva: \n"))
	expo = int(input("Ahora el exponente: \n"))
output = potencia(base, expo)
print("Resultado: ", output, "\n")
