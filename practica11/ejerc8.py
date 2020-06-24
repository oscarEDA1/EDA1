# Medición y gráficas de los tiempos de ejecución
importar  matplotlib . pyplot  como  plt 
de  mpl_toolkits . mplot3d  import  Axes3D
importar al  azar
del  tiempo de  importación  tiempo
desde  programa5  import  insertSort
desde  programa6  import  quicksort

datos  = [ ii * 100  para  ii  en el  rango ( 1 , 21 )]
tiempo_is  = []
tiempo_qs = []

para  ii  en  datos :
    lista_is  =  aleatorio . muestra ( rango ( 0 , 10000000 ), ii )
    lista_qs  =  lista_is . copia ()

    t0  =  tiempo ()
    insertSort ( lista_is )
    tiempo_is . agregar ( round ( time () - t0 , 6 ))

    t0  =  tiempo ()
    clasificación rápida ( lista_qs )
    tiempo_qs . agregar ( round ( time () - t0 , 6 ))

print ( "Tiempos parciales de ejecución en insert sort {} [s]" . format ( tiempo_is ))
print ( "Tiempos parciales de ejecución en clasificación rápida {} [s]" . format ( tiempo_qs ))
fig , ax  =  plt . subtramas ()
#ax = plt.subplots (111)
hacha . plot ( datos , tiempo_is , label = "insert sort" , marker = "*" , color = "r" )
hacha . plot ( datos , tiempo_qs , label = "clasificación rápida" , marcador = "o" , color = "b" )
hacha . set_xlabel ( "Datos" )
hacha . set_ylabel ( "Tiempo" )
hacha . cuadrícula ( verdadero )
hacha . leyenda ( loc = 2 )

plt . título ( "Tiempos de ejecución [s] inser sort" )
plt . show ()