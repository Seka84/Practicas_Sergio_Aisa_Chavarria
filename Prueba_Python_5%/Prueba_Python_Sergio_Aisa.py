#Escribe un programa en python que tenga una función a la cual se la pasan dos enteros "a" y "b" siendo "a" menor o igual que "b". Dicha #función imprimirá los números convirtiéndolos en positivos de "b" a "a" inclusive. El código tiene que incluir una llamada a dicha función #y el código necesario para leer esos números, los cuales han de ser negativos, y comprobar que "a" es menor que "b". Mientras no se cumpla #todo eso, se volverán a leer los números.

#Para contestar la pregunta tienes que hacer dos cosas: sube el archivo .py y copia y pega el código en el recuadro. 
def generarLista(a, b):
	
	print("Secuencia generada: \n")
	j= 0
	for i in range (b, (a-1), -1):
		j = i
		if i < 0:
			print(-j)
		elif i>= 0:
			print(j)
		
	print(".\nFin del programa")


print("Introduzca dos numeros, siendo el primero menor o igual que el segundo: \n")
a = int(input("1er numero\n"))
b = int(input("2o numero\n"))
while(a > b):
	print("Error, el primero no puede ser mayor que el segundo")
	a = int(input("1er numero\n"))
	b = int(input("2o numero\n"))
generarLista(a, b)
