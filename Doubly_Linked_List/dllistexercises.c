#include "dllistexercises.h"

DLList* mistery (DLList *l, int elem)
{
    DLList *node = search (l, elem); // searches a node
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
    return lx;
}