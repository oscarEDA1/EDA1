# incluye  " node.h "
# include  < stdlib.h >
# include  < stdio.h >

// Funcion para crear un nodo //
nodo * create_node (datos DATA) {
    nodo * t;
    t = (nodo *) malloc ( sizeof (nodo));
    t -> siguiente = NULL ;
    t -> datos = datos;
    volver t;
} 

// Funvion para eliminar un nodo//
void  delete_node (nodo * n) {
    if (n-> next == NULL ) {
        libre (n);
        n = NULL ;
    }
}
