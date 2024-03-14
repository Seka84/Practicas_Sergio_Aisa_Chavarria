#Crear una lista con los valores -4, -2, 0, 2, 4. Crear una nueva lista con los
#valores duplicados usando comprensión de listas. Filtrar la lista para excluir los
#números negativos.
listaUno = [-4, -2, 0, 2, 4]
listaDos = [(x) for x in listaUno if x>-1]
print(listaDos)
