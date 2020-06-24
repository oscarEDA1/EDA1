# ifndef CLIST_H
# define  CLIST_H
# include  " node.h "
# include  < stdbool.h >

typedef  struct _clist clist;

struct _clist {
    nodo * cabeza;
    int num;
};

clist * create_list ();
void  delete_list (clist * l);

// Funciones para agregar a la lista//
bool  add_init (clist * l, datos de DATOS);
bool  add_end (clist * l, datos DATA);
bool  add (clist * l, datos DATA, int pos);

// Función para eliminar un dato//
bool  remove_data (clist * l, datos de datos);

// Funciones para eliminar por posición//
DATA delete_init (clist * l);
DATA delete_end (clist * l);
DATA delete_data (clist * l, int pos);

// Funciones para buscar//
int  search_data (clist * l, datos DATA);
DATA search_pos (clist * l, int pos);
nodo * search_node (clist * l, datos de DATOS); 

// Ultimo y penultimo//
nodo * ultimo (clist * l);
nodo * penultimo (clist * l);
nodo * anterior (clist * l, int pos);
nodo * actual (clist * l, int pos);

// Función para imprimir//
vacío  print_list (clist * l);
bool  is_empty (clist * l);
vacío  vacío (clist * l);


# endif  