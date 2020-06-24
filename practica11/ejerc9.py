#Modelo RAM
importar  matplotlib . pyplot  como  plt
de  mpl_toolkits . mplot3d  import  Axes3D
importar al  azar

veces  =  0
def  insertSort ( lista ):
     tiempos globales 
    para  i  en  rango ( 1 , len ( lista )):
        veces  + =  1
        actual  =  lista [ i ]
        posicion  =  i
        mientras  posicion  >  0  y  lista [ posicion - 1 ] >  actual :
            veces  + =  1
            lista [ posicion ] =  lista [ posicion - 1 ]
            posicion  =  posicion - 1
        lista [ posicion ] =  actual
    volver  lista

TAM  =  101
eje_x  =  lista ( rango ( 1 , TAM ))
eje_y  = []

lista_variable = []

para  num  en  eje_x :
    lista_variable  =  aleatorio . muestra ( rango ( 0 , 1000 ), num )
    veces  =  0
    lista_variable  =  insertSort ( lista_variable )
    eje_y . agregar ( veces )

fig , ax  =  plt . subtramas ( facecolor = 'w' , edgecolor = 'k' )
hacha . plot ( eje_x , eje_y , marcador = "o" , color = "b" , linestyle = "Ninguno" )

hacha . set_xlabel ( 'x' )
hacha . set_ylabel ( 'y' )
hacha . cuadrícula ( verdadero )
hacha . leyenda ([ "Insertar clasificación" ])

plt . título ( "Tipo de inserción" )
plt . show ()

