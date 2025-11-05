#include "stack.h"

Stack* createStack(int size)
{
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->array = (int*)malloc(sizeof(int) * size);
    s->size = size;
    s->peek = 0;
    
    return s;

}

int fullStack(Stack* s)
{
    return (s->peek == s->size);

}

int emptyStack(Stack* s)
{
    return(s->peek == 0);

}

void push(Stack* s, int data)
{
    if(fullStack(s))
    {
        printf("error: full stack");
        exit(1);

    }
    s->array[s->peek] = data;
    s->peek++;

}

int pop(Stack* s)
{
    if(emptyStack(s))
    {
        printf("error: empty stack");
        exit(1);

    }
   
    s->peek--;

    return s->array[s->peek];

}

void printStack(Stack* s)
{
    printf("Stack: ");
    
    for(int i = 0; i < s->peek; i++)
    {
        printf("%d ", s->array[i]);

    }
    printf("\n");

}