#include "linkedlistexercises.h"

int sum (List *l)
{
    int sum = 0;
    List* t = l;
    while(t != NULL)
    {
        sum += t->data;
        t = t->next;

    }
    return sum;
}

int size (List *l)
{
    int siz = 0;
    List* t = l;
    while(t != NULL)
    {
        siz++;
        t = t->next;

    }
    return siz;
}

int max (List *l)
{
    int greatest = -1;
    List* t = l;
    while(t != NULL)
    {
        if(t->data > greatest){greatest = t->data;}        

        t = t->next;

    }
    return greatest;
}

void print_reverse (List *l)
{

}

int similar (List *A, List *B)
{
    List* t1 = A; List* t2 = B;
    int similar = 1;
     while(t1 != NULL && t2 != NULL)
    {
        if(t1->data != t2->data){similar = 0;}       
        t1 = t1->next;
        t2 = t2->next;

    }
    if(similar && t1 == NULL && t2 == NULL){ printf("similar");return 1;}
    else{printf("not similar"); return 0;}

}

List* intersection (List *A, List *B)
{

}

List* insert_back (List *l, int data)
{
    List* t = l;
    while(t->next != NULL){ t = t->next; }
    printf("%d", t->data);

    List* node = (List*)malloc(sizeof(List));
    t->next = node;
    node->next = NULL;
    node->data = data;

    return node;

}