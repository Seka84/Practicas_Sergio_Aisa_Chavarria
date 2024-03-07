def suma_n_numeros (num):
	out = 0
	for i in range (0, num+1):
		out = out + i
	return out


print("Introduzca un numero entero positivo: ")
num = -1
while(num < 0):

	num = int(input("\n"))
	if num < 0:
		print("Numero invalido.\n")
output = suma_n_numeros(num)
print("Resultado: ", output, "\n")
