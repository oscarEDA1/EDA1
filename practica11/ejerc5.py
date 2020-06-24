#Estrategia incremental
# Tipo de inserción
#Insertion sort ordena los elementos manteniendo una 
#sublista de números ordenados empezando por las 
#primeras localidades de la lista.
"" "
21 10 12 0 34 15
Parte ordenada
21 10 12 0 34 15
10 21 12 0 34 15
10 12 21 0 34 15
0 10 12 21 34 15
0 10 12 21 34 15
0 10 12 15 21 34
"" "

def  insertSort ( lista ):
    para  índice  en  rango ( 1 , len ( lista )):
        actual  =  lista [ índice ]
        posicion  =  index
        #print ("valor a ordenar {}". format (actual))
        mientras  posicion > 0  y  lista [ posicion - 1 ] > actual :
            lista [ posicion ] =  lista [ posicion - 1 ]
            posicion  =  posicion - 1
        lista [ posicion ] =  actual
        #print (lista)
        #impresión()
    volver  lista

lista  = [ 21 , 10 , 12 , 0 , 34 , 15 ]
#print (lista)
insertSort ( lista )
#print (lista)