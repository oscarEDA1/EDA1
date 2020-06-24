"" "
Para para listas
"" "

def  forList ():
    para  x  en [ 1 , 2 , 3 , 4 , 5 ]:
        imprimir ( x )
    para  x  en [ "uno" , "dos" , "tres" , "cuatro" , "cinco" ]:
        imprimir ( x )

"" "
Para para rangos
"" "

def  forrange ():
    para  x  en el  rango ( 5 ):
        imprimir ( x )
    para  y  en el  rango ( - 3 , 3 ):
        imprimir ( y )
    para  z  en el  rango ( - 4 , 2 , 2 ):
        imprimir ( z )    
    para  i  en  rango ( 5 , 0 , - 1 ):
        imprimir ( i )   
        
"" "
Para los diccionarios
"" "

def  fordic ():
    diccionario  = { 'manzana' : 1 , 'pera' : 3 , 'uva' : 10 }
    para  clave , valor  en  diccionario . artículos ():
        print ( clave , "=" , valor )

    para  clave  en  diccionario . teclas ():
        print ( clave )

    por  valor  en el  diccionario . valores ():
        imprimir ( valor )
    
    para  idx , x  en  enumerate ( diccionario ):
        print ( "El indice {} del elemento {}" . format ( idx , x ))



def  elsefor ():
    para  x  en el  rango ( 5 ):
        imprimir ( x )
    más :
        imprimir ( "Se acabo" )

def  elsefor2 ():
    para  x  en el  rango ( 5 ):
        imprimir ( x )
        si  x == 2 :
            rotura
    más :
        imprimir ( "La cuenta se termino" )

if  __name__  ==  '__main__' :
    #forList ()
    #forrange ()
    formal ()