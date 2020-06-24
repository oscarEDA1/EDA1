#Estrategia de fuerza bruta
#Realiza una busqueda exhaustiva
desde  cadenas  import  ascii_letters , dígitos
de  producto de importación itertools  
del  tiempo de  importación  tiempo

caracteres  =  ascii_letters  + dígitos

def  buscar ( con ):
    #Abrir el archivo con las cadenas generadas
    archivo  =  abierto ( "combinaciones.txt" , "w" )

    si  3 <=  len ( con ) <=  4 :
        para  i  en  rango ( 3 , 5 ):
            para  peinar  en  producto ( caracteres , repetir = i ):
                prueba  =  "" . unirse ( peinar )
                archivo . escribir ( prueba + " \ n " )
                si  prueba  ==  con :
                    print ( "La contraseña es {}" . formato ( prueba ))
                    archivo . cerrar ()
                    rotura
    más :
        print ( "Ingresa una contraseña de longitud 3 o 4" )

if  __name__  ==  "__main__" :
    con  =  input ( "Ingresa una contraseña:" )
    t0  =  tiempo ()
    buscar ( con )
    print ( "Tiempo de ejecución {}" . format ( round ( time () - t0 , 6 )))