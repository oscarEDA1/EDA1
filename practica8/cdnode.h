#ifndef CDNODE_H
#define CDNODE_H
#include <stdbool.h>

typedef struct _cdnode cdnode;
typedef int DATA;

struct _cdnode{
    DATA data;
    dnode *next;
    dnode *prev;
};

dnode *create_cdnode(DATA data);
bool remove_cdnode(dnode *n);

#endif 