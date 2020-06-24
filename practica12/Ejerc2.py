def  factorial_recursivo ( numero ):
    if  numero  <  2 : #El caso base es cuando numero <2
                   #y la función regresa 1
        volver  1
    return  numero  *  factorial_recursivo ( numero  -  1 )
    #La funcion se llama a sí misma
       
#print (factorial_recursivo (5))

memoria  = { 1 : 0 , 2 : 1 , 3 : 1 }
def  fibonacci_memo ( numero ):
    si  numero  en  memoria :
        volver  memoria [ numero ]
    memoria [ numero ] =  fibonacci_memo ( numero - 1 ) +  fibonacci_memo ( numero - 2 )
    volver  memoria [ numero ]

print ( fibonacci_memo ( 13 ))  