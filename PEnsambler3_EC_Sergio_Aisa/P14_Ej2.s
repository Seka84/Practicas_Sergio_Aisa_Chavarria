.data
cad1: .string "Introduzca un numero : "
cad2: .string "Numero de unos: "
    .text
    .globl main
main:
    #Solicitar al usuario que ingrese un número
    li a7, 4
    la a0, cad1
    ecall
    
    #Leer el número ingresado por el usuario
    li a7, 5
    ecall
    
    #Guardar el número ingresado en a0 en t4
    mv t4, a0
    
    #Inicializar contador de unos a cero
    li t3, 0
    li t1, 1
    
bucle:
    # Comprobar si el bit de la dcha es 1
    andi t2, t4, 1
    beqz t2, noSumarUno
  
    #Incrementar contador de unos
    addi t3, t3, 1
    
noSumarUno:
    #Desplazar el número un bit a la derecha
    srli t4, t4, 1
    
    #Comprobar si el número es cero
    bnez t4, bucle
    
    #Mostrar el resultado
    li a7, 4
    la a0, cad2
    ecall
    
    li a7, 1
    mv a0, t3
    ecall
    
    # Salir del programa
    li a7, 10
    ecall
