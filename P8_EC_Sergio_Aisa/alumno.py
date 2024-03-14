#Escribe un programa que tenga una clase Alumno con nombre y nota.
#Haz un método __init__ donde se lee el nombre y la nota.
#Haz un método mostrarNombre donde se imprime el nombre.
#Haz un método mostrarNota donde se imprime la nota
#Haz un método calculaNotaLiteral donde se imprima la nota literal correspondiente al valor numérico de la nota.
#Haz varias instancias con distintos valores y muestra el nombre, la nota y
#la nota literal para ver que funciona.
class Alumno:
	
	
	def __init__(self, n1, n2):
	
		self.name = n1
		self.nota = n2
		
	def mostrarNombre(self):
		print(self.name)
		
	def mostrarNota(self):
		print(self.nota)
	def calculaNotaLiteral(self):
		listaNotas = ["Suspenso", "Suspenso", "Suspenso", "Suspenso", "Suspenso", "Aprobado", "Aprobado", "Notable", "Notable", "Sobresaliente", "Sobresaliente"]
		i = int(self.nota)
		if((self.nota - i) > 0.5):
			i += 1
		print("Nota: ", listaNotas[i])
		
a1 = Alumno("Juan", 8)
a1.mostrarNombre()
a1.mostrarNota()
a1.calculaNotaLiteral()

a2 = Alumno("Pedro", 5)
a2.mostrarNombre()
a2.mostrarNota()
a2.calculaNotaLiteral()

a3 = Alumno("Dani", 9.6)
a3.mostrarNombre()
a3.mostrarNota()
a3.calculaNotaLiteral()

a4 = Alumno("Javier", 4.2)
a4.mostrarNombre()
a4.mostrarNota()
a4.calculaNotaLiteral()

a5 = Alumno("Alberto", 6.8)
a5.mostrarNombre()
a5.mostrarNota()
a5.calculaNotaLiteral()
