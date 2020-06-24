#Estrategia divide y vencerás
#Dividir el problema en subproblemas hasta que son suficientemente simples que se 
#pueden resolver directamente.
# Ordenación rápida
def  quicksort ( lista ):
    quicksort2 ( lista , 0 , len ( lista ) - 1 )

def  quicksort2 ( lista , inicio , fin ):
    si  inicio  <  fin :
        pivote  =  particion ( lista , inicio , fin )
        quicksort2 ( lista , inicio , pivote - 1 )
        quicksort2 ( lista , pivote + 1 , aleta )

def  particion ( lista , inicio , fin ):
    pivote  =  lista [ inicio ]
    #print ("valor del pivote {}". formato (pivote))
    izquierda  =  inicio + 1 
    derecha  =  fin
    #print ("indice izquierda {} y indice derecha {}". format (izquierda, derecha))
    bandera  =  falso
    mientras  no  bandera :
        mientras que  izquierda <=  derecha  y  lista [ izquierda ] <=  pivote :
            izquierda  =  izquierda + 1
        mientras  derecha  > =  izquierda  y  lista [ derecha ] > =  pivote :
            derecha  =  derecha  - 1
        si  derecha  <  izquierda :
            bandera  =  verdadero
        más :
            temp  =  lista [ izquierda ]
            lista [ izquierda ] =  lista [ derecha ]
            lista [ derecha ] =  temp
    #print (lista)
    temp  =  lista [ inicio ]
    lista [ inicio ] =  lista [ derecha ]
    lista [ derecha ] =  temp
    volver a la  derecha

lista  = [ 21 , 10 , 0 , 11 , 0 , 24 , 14 , 1 ]
#print (lista)
clasificación rápida ( lista )
#print (lista)                       