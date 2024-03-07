
nota = int(input("Introduzca su nota sobre 10\n"))
if nota < 5:
	print("Suspenso.")
elif nota > 4 and nota < 7:
	print("Aprobado.")
elif nota > 6 and nota < 9:
	print("Notable.")
elif nota > 8 and nota < 11:
	print("Sobresaliente.")
else:
	print("Nota invalida")
