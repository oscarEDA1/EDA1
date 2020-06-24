# ifndef LIST_H
# define  LIST_H
# include  " node.h "
# include  < stdbool.h >

typedef  struct _list list;

struct _list {
    nodo * cabeza;
    int num;
};

lista * create_list ();
void  delete_list (lista * l);

// Funciones para agregar a la lista//
bool  add_init (lista * l, datos de DATOS);
bool  add_end (lista * l, datos de DATOS);
bool  add (lista * l, datos DATA, int pos);

// Función para eliminar un dato//
bool  remove_data (lista * l, datos de DATOS);

// Funciones para eliminar por posición//
DATA delete_init (lista * l);
DATA delete_end (lista * l);
DATA delete_data (lista * l, int pos);

// Funciones para buscar//
int  search_data (lista * l, datos DATA);
DATA search_pos (lista * l, int pos);
nodo * search_node (lista * l, datos DATA); // regresar el nodo donde se encuentra la información//

// Ultimo y penultimo//
nodo * ultimo (lista * l);
nodo * penultimo (lista * l);
nodo * anterior (lista * l, int pos);
nodo * actual (lista * l, int pos);

// Función para imprimir//
vacío  print_list (lista * l);
bool  is_empty (lista * l);
vacío  vacío (lista * l);


# endif  / * LIST_H * /