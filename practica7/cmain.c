# include  < stdio.h >
# include  < stdlib.h >
# include  < stdbool.h >
# include  " clist.h "


int  main () {
    int op = 0 ;
    int dato;
    int posicion;
    int * n;
    int i;
    clist * l = create_list ();
     
    printf ( " Elija una opción: \ n " );
    printf ( " 1) Añadir \ n " );
    printf ( " 2) Eliminar (por dato) \ n " );
    printf ( " 3) Eliminar (por posición) \ n " );
    printf ( " 4) Buscar (por fecha) \ n " );
    printf ( " 5) Buscar (por posición) \ n " );
    printf ( " 6) Buscar (encuentra el nodo) \ n " );
    printf ( " 7) Imprimir \ n " );
    printf ( " 8) Salir \ n " );
            
    while (op! = 8 ) {
        printf ( " \ n ¿Que desea hacer ?: " );
        scanf ( " % i " , & op);
        interruptor (op) {
            caso  1 :
                printf ( " \ n ¿Que dato desea agregar ?: " );
                scanf ( " % i " , & dato);
                printf ( " \ n ¿En que posición ?: " );
                scanf ( " % i " , & posicion);
                agregar (l, dato, posicion);
            romper ;
            caso  2 :
                printf ( " \ n ¿Que dato desea eliminar ?: " );
                scanf ( " % i " , & dato);
                remove_data (l, dato);
                printf ( " Se elimino: % i " , dato);
            romper ;                
            caso  3 :
                printf ( " \ n ¿Que posición desea eliminar ?: " );
                scanf ( " % i " , & posicion);
                i = delete_data (l, posicion);
                printf ( " Se elimino: % i " , i);
            romper ;
            caso  4 :
                printf ( " \ n ¿Que dato desea buscar ?: " );
                scanf ( " % i " , & dato);
                i = buscar_datos (l, dato);
                printf ( " Se encontró en: % i " , i);
            romper ;
            caso  5 :
                printf ( " \ n ¿Que posición desea buscar ?: " );
                scanf ( " % i " , & posicion);
                i = search_pos (l, posicion);
                printf ( " Se encontro: % i " , i);
            romper ;
            caso  6 :
                printf ( " \ n ¿Que dato desea buscar ?: " );
                scanf ( " % i " , & dato);
                n = search_node (l, dato);
                printf ( " Se encontró en el nodo: % p " , n);
            romper ;
            caso  7 :
                print_list (l);
            romper ;
            caso  8 :
                printf ( " \ n Hasta pronto " );
                delete_list (l);              
            romper ;
            por defecto :    
                printf ( " Error, volver a ingresar " );
        }
    }
    return (EXIT_SUCCESS);
}