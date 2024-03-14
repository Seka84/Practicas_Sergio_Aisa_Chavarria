#Realice un programa que lea dos números y compruebe que el primero es
#menor que el segundo. Si no es así dará un mensaje de error y los volverá a
#leer. Si los números son correctos, llamará a una función imprime_pares_intervalo
#que imprimirá todos los números pares desde el mayor hasta el menor por pantalla (que los habrá recibido como argumentos). Por ejemplo si se 
#lee el 3 y el
#7, ha de imprimir 6, 4.
def imprime_pares_intervalo(num1, num2):
	
	for i in range(num2, num1, -1):
		if i%2 == 0:
			print(i)	
print("Introduzca dos numeros siendo el primero menor que el segundo\n")
fstNum = int(input("1er numero: \n"))
scndNum = int(input("2o numero: \n"))
while(fstNum >= scndNum):
	print("Numeros invalidos, introduzca dos numeros siendo el primero menor que el segundo \n")
	fstNum = int(input("1er numero: \n"))
	scndNum = int(input("2o numero: \n"))
imprime_pares_intervalo(fstNum, scndNum)
