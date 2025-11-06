#include "exercises.h"

DLList* mistery (DLList *l, int elem)
{
    DLList *node = search (l, elem);
    if (node == NULL) { return l; }
    if (l == node) { l = node->next; }
    if (node->next != NULL) { node->next->prev = node->prev; }
    if (node->prev != NULL) { node->prev->next = node->next; }
    free(node);
    return l;
}

DLList* split(DLList *l,int x, int y)
{
    DLList* t = l;
    while(t->data != x){t = t->next;}
    DLList* lx = create();
    while(t->data != y)
    {
        lx= insertBack(lx, t->data);
        t = t->next;
    }
    lx = insertBack(lx, t->data);
    return lx;
}

DLList* insert_back (DLList *l, int elem)
{
    DLList* node = (DLList*)malloc(sizeof(DLList));
        node->data = elem;
        node->next = l;
        node->prev = NULL;
        if(l != NULL){l->prev = node;}
        return node;

}