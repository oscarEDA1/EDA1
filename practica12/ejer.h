#ifndef E1_H
#define E1_H

typedef struct _info{
    char nombre[32];
    char apellido[64];

}INFO;

typedef struct _node NODE;
struct _node
{
    INFO info;
    NODE *next;
    NODE *prev;
};

typedef struct _list
{
    NODE *tail;
    NODE *head;
}LIST;

void insertar(INFO info, LIST *l);
void eliminar(LIST *l);
LIST *crear_lista();
NODE *crear_node();
void imprimir(LIST *l);
void borrar_nodos(NODE *n);//esta sera la funcion recursiva
#endif

