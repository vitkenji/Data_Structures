#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node* next;
    struct node* prev;
    int data;

}DLList;

DLList* create();
DLList* insertFront(DLList* l, int data);
DLList* insertBack(DLList* l, int data);
DLList* search(DLList* l, int data);
void printDLList(DLList* l);