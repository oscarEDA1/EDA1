#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "cdlist.h"

cdlist *create_cdlist(){
    cdlist *l = (cdlist*)malloc(sizeof(cdlist));
    l->head = NULL;
    l->tail = NULL;
    l->num = 0;
    return l;
}

bool remove_cdlist(cdlist *l){
    if(!is_empty_cdlist(l))
        empty_cdlist(l);
    free(l);
    return true;
}

DATA search_cdlist(cdlist *l, int pos){
    if(pos == 0) return l->head->data;
    else if(pos == l->num-1) return l->tail->data;
    else if(pos >0 && pos < l->num-1){
        cdnode *t = l->head->next;
        for(int i=1; i<l->num-1; i++){            
            if(i==pos) return t->data;
            t = t->next;
        }
    }
    return -1;
}

cdnode* search_cdnode_cdlist(cdlist *l, int pos){
    if(pos == 0) return l->head;
    else if(pos == l->num-1) return l->tail;
    else if(pos >0 && pos < l->num-2){
        cdnode *t = l->head->next;
        for(int i=1; i<l->num-2; i++){
            if(i==pos) return t;
            t = t->next;
        }
    }
    return NULL;
}

int locate_cdlist(cdlist *l, DATA data){
    cdnode *t = l->head;
    for(int i= 0; i <l->num; i++){
        if(t->data==data) return i;
        t = t->next;
    }
    return -1;
}

void print_cdlist(cdlist *l){
    cdnode *t = l->head;
    printf("[ ");
    for(int i=0; i < l->num-1; i++){
        printf("%d, ", t->data);
        t = t->next;
    }
    printf("%d ", t->data);
    printf("]\n");
}

void empty_cdlist(cdlist *l){
    if(is_empty_cdlist(l)) return;
    cdnode *t = l->head;
    while(remove_init(l));
}

bool delete_data(cdlist *l, DATA data){
    cdnode *t = l->head;
    for(int i =0; i < l->num; i++){
        if(t->data == data){
            if(t == l->head) return remove_init(l);
        }
    }
}

bool is_empty_cdlist(cdlist *l){
    if(l->head == NULL && l->tail == NULL) return true;
    return false;
}

bool insert_init(cdlist* l, DATA data){
    if(l == NULL) return false;
    cdnode *nuevo = create_cdnode(data);
    if(is_empty_cdlist(l)){        
        l->head = nuevo;
        l->tail = nuevo;
        l->head->prev = l->tail;
        l->tail->next = l->head;        
        l->num =1;
        return true;
    }
    nuevo->next = l->head;
    nuevo->prev = l->tail;
    l->head->prev = nuevo;
    l->tail->next = nuevo;
    l->head = nuevo;
    l->num++;
    return true;
}

bool insert_end(cdlist* l, DATA data){
    if(l == NULL) return false;
    cdnode *nuevo = create_cdnode(data);
    if(is_empty_cdlist(l)){        
        l->head = nuevo;
        l->tail = nuevo;
        l->head->prev = l->tail;
        l->tail->next = l->head;  
        l->num =1;
        return true;
    }
    nuevo->prev = l->tail;
    nuevo->next = l->head
    l->head->prev = nuevo;   
    l->tail->next = nuevo;
    l->tail = nuevo;
    l->num++;
    return true;
}

bool insert_cdlist(cdlist* l, DATA data,  int pos){
    if(l == NULL) return false;
    cdnode *nuevo = create_cdnode(data);
    if(pos ==0) return insert_init(l, data);
    else if(pos == l->num-1) return insert_end(l,data);
    else if(pos == 1 && l->num==1) return insert_end(l,data);    
    else if(pos >0 && pos< l->num-1 || pos ==1 && l->num==2){
        cdnode *t = l->head->next;
        for(int i =1; i < pos; i++){
            t= t->next;
        }
        cdnode *prev = t->prev;    
        prev->next = nuevo;
        nuevo->next = t;
        nuevo->prev = prev;        
        t->prev = nuevo;
        l->num++;
        return true;
    } 
    return false;
}

bool remove_end(cdlist *l){
    if(l == NULL || is_empty_cdlist(l)) return false;
    if(l->head ==l->tail){
        l->head->next = NULL;
        l->head->prev = NULL;
        remove_cdnode(l->head);
        l->head = l->tail = NULL;
        l->num = 0;
        return true;
    }
    cdnode *t = l->tail->prev;
    t->next= l->head;
    l->head->prev = t;
    l->tail->prev = NULL;
    l->tail->next = NULL;
    remove_cdnode(l->tail);
    l->tail = t;
    l->num--;
    return true;
}

bool remove_init(cdlist *l){
    if(l == NULL || is_empty_cdlist(l)) return false;
    if(l->head ==l->tail){
        l->head->next = NULL;
        l->head->prev = NULL;
        remove_cdnode(l->head);
        l->head = l->tail = NULL;
        l->num = 0;
        return true;
    }
    cdnode *t = l->head->next;
    l->head->next= NULL;
    l->head->prev = NULL; 
    l->tail->next = t;
    t->prev = l->tail;
    remove_cdnode(l->head);
    l->head = t;
    l->num--;
    return true;
}

bool remove_pos(cdlist *l ,int pos){
    if(pos == 0){
        return remove_init(l);
    }else if(pos == l->num-1){
        return remove_end(l);
    }else if(pos>0 && pos < l->num-1 || pos ==1 && l->num==2){
        cdnode *t = l->head->next;
        for(int i =1; i < pos; i++){
            t= t->next;
        }
        cdnode *prev = t->prev;    
        cdnode *next = t->next;        
        prev->next = next;        
        next->prev = prev;
        t->next = NULL;
        t->prev = NULL;
        remove_cdnode(t);
        l->num--;
        return true;
    }
    return false;
}