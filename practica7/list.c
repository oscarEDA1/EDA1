# include  " list.h "
# include  < stdio.h >
# include  < stdlib.h >
//lista ligada//

// Funcion para crear una lista//
lista * create_list () {
    lista * t; 
    t = (lista *) malloc ( sizeof (lista));
    t -> cabeza = NULL ;
    t -> num = 0 ;
    volver t;
} 

// Funcion para eliminar una lista//
void  delete_list (list * l) {
    if (! is_empty (l))
        vacío (l);
    libre (l);
    l = NULL ;
}

// Funciones para agregar a la lista//
bool  add_init (lista * l, datos de DATOS) {
    if (l == NULL ) devuelve  falso ;
    if ( is_empty (l)) {
        l-> head = create_node (datos);
        l-> num = 1 ;
        volver  verdadero ;
    }
    nodo * nuevo = create_node (datos);
    nuevo-> siguiente = l-> cabeza ;
    l-> cabeza = nuevo;
    l-> num ++;
    volver  verdadero ;
}
bool  add_end (lista * l, datos de DATOS) {
    if (l == NULL ) devuelve  falso ;
    if ( is_empty (l)) {
	l-> head = create_node (datos);
        l-> num = 1 ;
        volver  verdadero ;
    }
    nodo * nuevo = create_node (datos);
    nodo * fin = ultimo (l);
    fin-> siguiente = nuevo;
    l -> num ++;
    volver  verdadero ;
}
bool  add (lista * l, datos DATA, int pos) {
    if (l == NULL ) devuelve  falso ;
    if (pos == 0 || is_empty (l)) {
        return  add_init (l, datos);
    } else  if (pos == l-> num ) {
        return  add_end (l, datos);
    } else  if (pos> 0 && pos <l-> num ) {
        nodo * act = actual (l, pos);
        nodo * ant = actual (l, pos- 1 );
        nodo * nuevo = create_node (datos);
        hormiga-> siguiente = nuevo;
        nuevo -> siguiente = acto;
        l-> num ++;
        volver  verdadero ;
    } más {
        devuelve  falso ;
    }
}

// Función para eliminar un dato//
bool  remove_data (lista * l, datos de DATOS) {
    if (l == NULL ) devuelve  falso ;
    nodo * t = l-> cabeza ;
    nodo * hormiga, * acto;
    int i = 0 ;
    while (t! = NULL ) {
        if (t-> data == data) {
            romper ;
        }
        t = t-> siguiente ;
	i ++;
    }
    hormiga = real (l, i- 1 );
    act = actual (l, i);
    hormiga-> siguiente = acto-> siguiente ;
    acto -> siguiente = NULL ;
    delete_node (acto);
    l-> num -;
    volver  verdadero ;
}

// Funciones para eliminar por posición//
DATA delete_init (list * l) {
    if (l == NULL ) devuelve - 1 ;
    if (! is_empty (l)) {
        nodo * t = l-> cabeza ;
        int d = t-> datos ;
        l-> cabeza = l-> cabeza -> siguiente ;
        t-> siguiente = NULL ;
	delete_node (t);
        l-> num -;
        retorno d;
    } 
    volver - 1 ;
}

DATA delete_end (list * l) {
    if (l == NULL ) devuelve - 1 ;
    if (! is_empty (l)) {
        nodo * ult = ultimo (l);
        nodo * t = penultimo (l);
        int d = ult-> datos ;
        t-> siguiente = NULL ;
	delete_node (ult);
        l-> num -;
        retorno d;
    } 
    volver - 1 ;
}

DATA delete_data (list * l, int pos) {
    int d;
    if (l == NULL ) devuelve - 1 ;
    if (pos == 0 ) {
        return  delete_init (l);
    } else  if (pos == l-> num - 1 ) {
        volver  delete_end (l);
    } else  if (pos> 0 && pos <l-> num - 2 ) {
        nodo * ult = actual (l, pos);
        nodo * ant = actual (l, pos- 1 );
        hormiga-> siguiente = ult-> siguiente ;
        ult-> siguiente = NULL ;
        delete_node (ult);
        l-> num -;
        retorno d;
    } más {
        volver - 1 ;
    }
}

// Funciones para buscar//
/ *
 * @return la posición de un dato en la lista
 * /
int  search_data (lista * l, datos DATA) {
    int pos;
    nodo * t;
    for (pos = 0 , t = l-> head ; data! = t-> data && t-> next ! = NULL ; pos ++, t = t-> next );
    if (pos> = l-> num ) return - 1 ;
    volver pos;
}
DATA search_pos (list * l, int pos) {
    nodo * t;
    int i;
    para (i = 1 , t = l-> cabeza ; i == pos; i ++, t = t-> siguiente );
    if (t! = NULL ) devuelve t-> datos ;
    volver - 1 ;
}

nodo * search_node (lista * l, datos DATA) {
    nodo * t;
    for (t = l-> head ; data! = t-> data && t-> next ! = NULL ; t = t-> next );
    if (t-> next == NULL && data! = t-> data ) devuelve  NULL ;
    volver t;
} // regresar el nodo donde se encuentra la información//

// Funciones para obtener posiciones//
nodo * ultimo (lista * l) {
    nodo * t = l-> cabeza ;
    while (t-> next ! = NULL ) {
            t = t-> siguiente;
    }
    volver t;
}

nodo * penultimo (lista * l) {
    nodo * t = l-> cabeza ;
    while (t-> next -> next ! = NULL )
        t = t-> siguiente ;
    volver t;
}

nodo * anterior (lista * l, int pos) {
    nodo * t = l-> cabeza ;
    int i = 0 ;
    while (t-> next ! = NULL && i <pos- 1 ) t = t-> next ;
    volver t;	
}

nodo * actual (lista * l, int pos) {
    nodo * t = l-> cabeza ;
    int i = 0 ;
    while (t-> next ! = NULL && i <pos) {
        t = t-> siguiente ;
        i ++;
    }
    volver t;
}

// Función para imprimir//
vacío  print_list (lista * l) {
    nodo * t = l-> cabeza ;
    while (t! = NULL ) {
        printf ( " Dato: % i \ n " , t-> datos );
        t = t-> siguiente ;
    }
}

// Funcion para verificar si la lista esta vacia//
bool  is_empty (lista * l) {
    if (l-> head ! = NULL ) devuelve  falso ;
    volver  verdadero ;
}

// Funcion para vaciar la lista//
vacío  vacío (lista * l) {
    nodo * t = ultimo (l);
    nodo * p = penultimo (l);
    nodo * hormiga;
    while (t! = NULL && t! = l-> head ) {
        hormiga = penultimo (l);
        hormiga -> siguiente = NULL ;
        delete_node (t);
        t = ultimo (l);
    }
    delete_node (l-> head );
    l-> num = 0 ;
}