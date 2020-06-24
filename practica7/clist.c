# include  " clist.h "
# include  < stdio.h >
# include  < stdlib.h >
//lista circular//

clist * create_list () {
    clist * t;
    t = (clist *) malloc ( sizeof (clist));
    t-> cabeza = NULL ;
    t-> num = 0 ;
    volver t;
}

void  delete_list (clist * l) {
    if (! is_empty (l))
        vacío (l);
    libre (l);
    l = NULL ;
}

// Funcines para agregar a la lista//
bool  add_init (clist * l, datos DATA) {
    if (l == NULL ) devuelve  falso ;
    if ( is_empty (l)) {
        l-> head = create_node (datos);
        l-> cabeza -> siguiente = l -> cabeza;
        l-> num = 1 ;
        volver  verdadero ;
    }
    nodo * nuevo = create_node (datos);
    nuevo-> siguiente = l-> cabeza ;    
    nodo * ult = ultimo (l);
    l-> cabeza = nuevo;
    ult-> siguiente = l-> cabeza ;    
    l-> num ++;
    volver  verdadero ;
}

bool  add_end (clist * l, datos DATA) {
    if (l == NULL ) devuelve  falso ;
    if ( is_empty (l)) {
        l-> head = create_node (datos);
        l-> cabeza -> siguiente = l-> cabeza ;
        l-> num = 1 ;
        volver  verdadero ;
    }
    nodo * nuevo = create_node (datos);
    nodo * fin = ultimo (l);
    fin-> siguiente = nuevo;
    nuevo-> siguiente = l-> cabeza;
    l-> num ++;
    volver  verdadero ;
}
bool  add (clist * l, datos DATA, int pos) {
    if (l == NULL ) devuelve  falso ;
    if (pos == 0 || is_empty (l)) {
        return  add_init (l, datos);
    } else  if (pos == l-> num ) {
        return  add_end (l, datos);
    } else  if (pos> 0 && pos <l-> num ) {
        nodo * act = actual (l, pos);
        nodo * hormiga = anterior (l, pos);
        nodo * nuevo = create_node (datos);
        hormiga-> siguiente = nuevo;
        nuevo-> siguiente = acto;
        l-> num ++;
        volver  verdadero ;
    } más 
        devuelve  falso ;
}

// Funciones para eliminar un dato//
bool  remove_data (clist * l, datos DATA) {
    if (l == NULL ) devuelve  falso ;
    nodo * t = l-> cabeza ;
    nodo * hormiga, * acto;
    int i = 0 ;
    while (t! = NULL ) {
        if (t-> data == data) {
            romper ;
        }
        t = t -> siguiente ;
        i ++;
    }
    hormiga = real (l, i- 1 );
    act = actual (l, i);
    if (act == l-> head ) {
        delete_init (l);
        volver  verdadero ;
    } else  if (act == ultimo (l)) {
        delete_end (l);
        volver  verdadero ;
    }
    hormiga-> siguiente = acto-> siguiente ;
    act-> next = NULL ;
    delete_node (acto);
    l-> num -;
    volver  verdadero ;
}

// Funciones para eliminar por posición//
DATA delete_init (clist * l) {
    if (l == NULL ) devuelve - 1 ;
    if (! is_empty (l)) {
        nodo * t = l-> cabeza ;
        int d = t-> datos ;
        nodo * ult = ultimo (l);
        l-> cabeza = l-> cabeza -> siguiente ;
        ult-> siguiente = l-> cabeza ;
        t-> siguiente = NULL ;
        delete_node (t);
        l-> num -;
        retorno d;
    }
    volver - 1 ;
}

DATA delete_end (clist * l) {
    if (l == NULL ) devuelve - 1 ;
    if (! is_empty (l)) {
        nodo * ult = ultimo (l);
        nodo * t = penultimo (l);
        int d = ult-> datos ;
        t-> siguiente = l-> cabeza ;
        delete_node (ult);
        l-> num -;
        retorno d;
    }
    volver - 1 ;
}

DATA delete_data (clist * l, int pos) {
    int d;
    if (l == NULL ) devuelve - 1 ;
    if (pos == 0 ) {
        return  delete_init (l);
    } else  if (pos == l-> num - 1 ) {
        volver  delete_end (l);
    } else  if (pos> 0 && pos <l-> num - 1 ) {
        nodo * ult = actual (l, pos);
        d = ult-> datos ;
        nodo * ant = actual (l, pos- 1 );
        hormiga-> siguiente = ult-> siguiente ;
        ult-> siguiente = NULL ;
        delete_node (ult);
        l-> num -;
        retorno d;
    } más
        volver - 1 ;
}

// Funciones para buscar//
/ *
 * @return la posición de un dato en la lista
* /
int  search_data (clist * l, datos DATA) {
    int pos;
    nodo * t;
    for (pos = 0 , t = l-> head ; data! = t-> data && t-> next ! = l-> head ; pos ++, t = t-> next );
    if (pos> = l-> num ) return - 1 ;
    volver pos;
} 

DATA search_pos (clist * l, int pos) {
    nodo * t;
    int i;
    para (i = 1 , t = l-> cabeza ; i <pos; i ++, t = t-> siguiente );
    if (t! = NULL ) devuelve t-> datos ;
    volver - 1 ;
} 

nodo * search_node (clist * l, datos de DATOS) {    
    nodo * t;
    for (t = l-> head ; data! = t-> data && t-> next ! = l-> head ; t = t-> next );
    if (t-> next == l-> head && data! = t-> data ) devuelve  NULL ;
    volver t;
}

// Funciones para obtener posiciones//
nodo * ultimo (clist * l) {
    nodo * t = l-> cabeza ;
    while (t-> next ! = l-> head ) {
        t = t -> siguiente;
    }
    volver t;
}

nodo * penultimo (clist * l) {
    nodo * t = l-> cabeza ;
    while (t-> next -> next ! = l-> head )
        t = t-> siguiente ;
    volver t;
}

nodo * actual (clist * l, int pos) {
    nodo * t = l-> cabeza;
    int i = 0 ;
    while (t-> next ! = l-> head && i <pos) {
        t = t -> siguiente;
        i ++;
    }
    volver t;
}

nodo * anterior (clist * l, int pos) {
    nodo * t = l-> cabeza ;
    int i = 0 ;
    while (t-> next ! = l-> head && i <pos- 1 ) {
        t = t -> siguiente;
        i ++;
    }
    volver t;
}
// funcion para imprimir//
vacío  print_list (clist * l) {
    nodo * t = l-> cabeza ;
    while (t-> next ! = l-> head ) {
        printf ( " Dato: % i \ n " , t-> datos );
        t = t-> siguiente ;
    }
    printf ( " Dato: % i \ n " , t-> datos );  
}

// Funcion para verificar si la lista esta vacia//
bool  is_empty (clist * l) {
    if (l-> head ! = NULL ) devuelve  falso ;
    volver  verdadero ;
}

// Funcion para vaciar la lista//
vacío  vacío (clist * l) {
    nodo * t = ultimo (l);
    nodo * hormiga;
    while (t! = NULL && t! = l-> head ) {
        hormiga = penultimo (l);
        delete_node (t);
        hormiga-> siguiente = l-> cabeza ;
        t = ultimo (l);
    }
    delete_node (l-> head );
    l-> num = 0 ;
}