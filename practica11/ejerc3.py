#Estrategia bottom-up o programacion dinamica
#Se resuelve un problema a partir de subproblemas que ya han sido resueltos. 
#La solución final se forma a partir de la combinación de una o más soluciones 
#que se guardan en una tabla, esto previene que se vuelvan a calcular las soluciones.
def  fibo ( numero ):
    a  =  1
    b  =  1
    c  =  0
    para  i  en  rango ( 1 , numero - 1 ):
        c  =  a  +  b
        a  =  b
        b  =  c
    volver  c

def  fibo2 ( numero ):
    a  =  1
    b  =  1
    c  =  0
    para  i  en  rango ( 1 , numero - 1 ):
        a , b = b , a + b
    volver  b

def  fibo_bottom_up ( numero ):
    fib_parcial  =   [ 1 , 1 , 2 ]
    while  len ( fib_parcial )
        fib_parcial . agregar ( fib_parcial [ - 1 ] + fib_parcial [ - 2 ])
        print ( fib_parcial )
    volver  fib_parcial [ numero - 1 ]

f  =  fibo_bottom_up ( 5 )
imprimir ( f )