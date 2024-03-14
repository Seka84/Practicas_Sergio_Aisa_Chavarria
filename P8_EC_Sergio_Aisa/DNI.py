n = int(input("Introduzca su DNI (sin letra)\n"))
resto = n%23
lista_letras_DNI = ['T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E']
print("Letra: ", lista_letras_DNI[resto])
