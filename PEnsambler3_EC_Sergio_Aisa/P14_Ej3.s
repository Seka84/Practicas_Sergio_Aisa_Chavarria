#Considérese el siguiente fragmento de código que representa el segmento
#de datos:
#1 . data
#2 datos1 : . half 4 ,7 ,2
#3 . align 2
#4 . word 1 , -5
#5 . byte 4
#6 . align 1
#7 . half 3
#8 . align 2
#9 . word -3
#10 . zero 2
#Escriba un programa que, utilizando los modos de direccionamiento realice
#las siguientes operaciones sin modificar el segmento de datos:
#Calcular la suma del primer word que vale 1 colocado a partir de la etiqueta datos1 y del half que tiene valor 3 y colocar este resultado en el
#espacio de 2 bytes. Imprimir y comprobar el valor.
#Calcular la suma del word que vale -5 y del que vale -3 y colocar este
#resultado (usando 2 bytes) donde el half que vale 2. Imprimir y comprobar
#el valor.
	.data
datos1: 
	.half 4 ,7 ,2
    .align 2
    .word 1 , -5
    .byte 4
    .align 1
    .half 3
    .align 2
    .word -3
    .zero 2
    .text
    .globl main
main:
#Calcular la suma del primer word que vale 1 colocado a partir de la etiqueta datos1 y del half que tiene valor 3 y colocar este resultado en el
#espacio de 2 bytes. Imprimir y comprobar el valor.
	la t0, datos1
    lw t1, 8(t0)
    lh t2, 18(t0)
    add t3, t1, t2
    sh t3, 24(t0)
    li a7, 1
    lh t4, 24(t0)
    mv a0, t4
    ecall
#Calcular la suma del word que vale -5 y del que vale -3 y colocar este
#resultado (usando 2 bytes) donde el half que vale 2. Imprimir y comprobar
#el valor. 
	lw t1, 12(t0)
    lw t2, 20(t0)
    add t3, t1, t2
    sw t3, 4(t0)
    lw t4, 4(t0)
    mv a0, t4
    ecall
    # Salir del programa
    li a7, 10
    ecall
