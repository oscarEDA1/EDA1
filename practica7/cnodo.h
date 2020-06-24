# ifndef NODE_H
# define  NODE_H

typedef  int DATA;
typedef  struct _node node;

struct _node {
    Datos de datos;
    nodo * siguiente;
};

nodo * create_node (datos DATA);
vacío  delete_node (nodo * n);


# endif 