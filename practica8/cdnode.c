#include "cdnode.h"
#include <stdio.h>
#include <stdlib.h>

dnode *create_cdnode(DATA data){
    cdnode * d = (cdnode*)malloc(sizeof(cdnode));
    d->next = NULL;
    d->prev = NULL;
    d->data = data;
    return d;
}

bool remove_cdnode(cdnode *n){
    if(n->prev == NULL && n->next == NULL){
        free(n);
        return true;
    }
    return false;
}