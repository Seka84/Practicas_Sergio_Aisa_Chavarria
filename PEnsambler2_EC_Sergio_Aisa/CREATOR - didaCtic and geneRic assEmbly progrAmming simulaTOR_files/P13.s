#Utilizando como guía la descripción de las instrucciones anteriores, se proponen los siguientes ejercicios. Hay que tener siempre presente que con el
#simulador se puede utilizar el modo de ejecución paso a paso y emplear breakpoints para analizar detalladamente la ejecución de un programa, permitiendo
#detectar errores en la programación.
#Realice un programa que declare dos datos de tipo word en el segmento de
#datos con valores 3 y 7. Además tiene que leer cuatro enteros A, B, C y D por
#pantalla y que muestre lo siguiente:
#A+B
#C-D
#A+B+C+D
#Mostrar A al cubo
#A << 2
#Leerá los dos enteros del segmento de datos e imprimirá el resto de dividir
#7 entre 3.
	.data
datos:.word 3,7

	
	.globl main
	.text

main:
	#Lecturas
    li a7, 5
    #A
    ecall
    mv t0, a0
    #B
    ecall
    mv t1, a0
    #C
    ecall
    mv t2, a0
    #D
    ecall
    mv t3, a0
	#Impresiones
    li a7,1
    #A+B
    add t4, t0, t1
    mv a0, t4
    ecall
    
    #C-D
    sub t4, t2, t3
    mv a0, t4
    ecall
    
    #A+B+C+D
    add t4, t0, t1
    add t5, t2, t3
    add t6, t4, t5
    mv a0, t6

    ecall
    #A²
    mul t4, t0, t0
    mul t4, t4, t0
    mv a0, t4
    ecall
    
    #A << 2
    slli t4, t0, 2
    mv a0, t4
    ecall
    
    #Puntero
    la t0, datos
    lw t1, 0(t0)
    lw t2, 4(t0)
    rem t3, t2, t1
    mv a0, t3
    ecall
li a7, 10
ecall