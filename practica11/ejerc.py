#Algoritmos ávidos (codicioso)
#Se toma una serie de decisiones en un orden específico, 
#una vez que se ha ejecutado esa decisión, ya no se vuelve a considerar.
def  cambio ( cantidad , monedas ):
    resultado  = []
    mientras  cantidad > 0 :
        si  cantidad  > =  monedas [ 0 ]:
            num  =  cantidad  //  monedas [ 0 ]
            cantidad  =  cantidad  - ( num * monedas [ 0 ])
            resultado . agregar ([ monedas [ 0 ], num ])
        monedas  =  monedas [ 1 :]
    devolver  resultado

if  __name__  ==  "__main__" :
    imprimir ( cambio ( 1000 , [ 20 , 10 , 5 , 2 , 1 ]))
    print ( cambio ( 20 , [ 20 , 10 , 5 , 2 , 1 ]))
    imprimir ( cambio ( 30 , [ 20 , 10 , 5 , 2 , 1 ]))
    imprimir ( cambio ( 98 , [ 5 , 20 , 1 , 50 ]))