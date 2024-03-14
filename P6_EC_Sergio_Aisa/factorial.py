#Realice un programa que lea un entero n y llame a la función factorial
#y devuelve el factorial del número que se le pasa como argumento. Hay que
#imprimir el resultado por pantalla

def factorial(n):
	output = 1
	for i in range (n, 0, -1):
		output *= i
	return output

n = int(input("Introduzca el numero cuyo factorial quiera calcular\n"))
output = factorial(n)
print("Resultado: ", output)
