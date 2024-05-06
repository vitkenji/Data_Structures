#include "dllist.h"

DLList* create()
{
    return NULL;

}

DLList* insertBack(DLList* l, int data)
{
        DLList* node = (DLList*)malloc(sizeof(DLList));
        node->data = data;
        node->next = l;
        node->prev = NULL;
        if(l != NULL){l->prev = node;}
        return node;

}

DLList* insertFront(DLList* l, int data)
{
    DLList* node = (DLList*)malloc(sizeof(DLList));
    node->data = data;
    node->next = NULL;
    
    DLList* t = l;
    while(t->next != NULL){t = t->next;}
    t->next = node;
    node->prev = t;

    return l;

}

void printDLList(DLList* l)
{
    printf("DLList: ");

    DLList* t = l;
    while(t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");

}

DLList* search(DLList* l, int data)
{
    if(l != NULL)
    {
        DLList* t = l;
        while(t != NULL)
        {
            if(t->data == data)
            {
                printf("found");
                return t;
            }
            t = t->next;
        }
    }
    printf("not found");
    return NULL;
}

DLList* removeData(DLList* l, int data)
{

}