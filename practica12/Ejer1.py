tortuga de importación

def  recorrido_recursivo ( tortuga , espacio , huella ):
    si  huella > 0 :
        tortuga . sello ()
        espacio  =  espacio  + 3
        tortuga . adelante ( espacio )
        tortuga . derecha ( 24 )
        recorrido_recursivo ( tortuga , espacio , huella - 1 )


wn  =  tortuga . Pantalla ()
wn . bgcolor ( "verde claro" )
wn . título ( "Tortuga" )
tess  =  tortuga . Tortuga ()
Tess . forma ( "tortuga" )
Tess . color ( "azul" )

Tess . penup ()
recorrido_recursivo ( tess , 20 , 30 )

wn . mainloop ()
© 2020 GitHub, Inc.