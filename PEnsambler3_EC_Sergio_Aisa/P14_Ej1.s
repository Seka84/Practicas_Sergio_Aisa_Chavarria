#Realice un programa que lea una cadena por teclado y calcule la suma de
#todos los valores ASCII de los caracteres que la forman y además el número de caracteres iguales a la letra ’a’ que forman dicha cadena (dos contadores). Nota: para la lectura de la cadena debe emplearse la llamada al sistema
#read_string. Hay que imprimir los resultados por pantalla (la suma de los valores ASCII y el número de letras ’a’).

	.data
cad1: .string " Introduzca una cadena :"
cad2: .zero 100
cad3: .string "Suma de los calores ASCII: "
cad4: .string "Numero de 'a's: "
    .text
    .globl main
main:
	li a7, 4
    la a0, cad1
    ecall
    li a7, 8
    la a0, cad2
    li a1, 100
    ecall
    li t2, 0
    li t3, 0
    li t4, 97
    li t5, 65
    la t0, cad2
bucle:
	lb t1, 0(t0)
    beq t1, zero, fin
    add t2, t2, t1
    addi t0, t0, 1
    beq t1, t4, addA
    beq t1, t5, addA
    j bucle
addA:
	addi t3, t3, 1
	j bucle
fin:
	li a7, 4
    la a0, cad3
    ecall
	li a7, 1
    mv a0, t2
    ecall
    
    li a7, 4
    la a0, cad4
    ecall
	li a7, 1
    mv a0, t3
    ecall
    
	li a7, 10
    ecall