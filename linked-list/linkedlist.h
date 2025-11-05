#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* next;
    int data;

}List;

List* create();
List* insert(List* l, int data);
List* search(List* l, int data);
List* removeData(List* l, int data);
void printList(List* l);
