#ifndef CDLIST_H
#define CDLIST_H
#include "cdnode.h"

typedef struct _cdlist cdlist;

struct _cdlist{
    cdnode *head;
    cdnode *tail;
    int num;
};

dlist *create_cdlist();
bool remove_cdlist(cdlist *l);

bool insert_init(cdlist *l, DATA data);
bool insert_end(cdlist *l, DATA data);
bool insert_dlist(cdlist *l, DATA data, int pos);

bool remove_init(cdlist *l);
bool remove_end(cdlist *l);
bool remove_pos(cdlist *l ,int pos);

DATA search_cdlist(cdlist *l, int pos);
int locate_cdlist(cdlist *l, DATA data);
cdnode* search_cdnode_cdlist(cdlist *l, int pos);

void print_cdlist(cdlist *l);

bool is_empty_cdlist(cdlist *l);
void empty_cdlist(cdlist *l);

bool delete_data(cdlist *l, DATA data);


#endif 