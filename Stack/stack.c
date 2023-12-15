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

Queue* createQueue(int size)
{
    Queue* q = (Queue*) malloc(sizeof(Queue));
    q->array = (int*) malloc(sizeof(int)*size);
    q->size = size;
    q->front = 0;
    q->back = 0;

    return q;

}

int fullQueue(Queue* q)
{
    return (q->front == (q->back + 1) % q->size);

}

int emptyQueue(Queue* q)
{
    return (q->front == q->back);   

}

int front(Queue* q)
{
    return(q->array[q->front]);
}

void enqueue(Queue* q, int data)
{
    if(fullQueue(q))
    {
        printf("error: full queue");
        exit(1);

    }
    
    q->array[q->back] = data;
    q->back = (q->back + 1) % q->size;
    
}

int dequeue(Queue* q)
{
    if(emptyQueue(q))
    {
        printf("error: empty queue");
        exit(1);

    }

    int data = q->array[q->front];
    q->front = (q->front + 1) % q->size; 
    
    return data; 
    
}

void printQueue(Queue* q)
{
    printf("Queue: ");
    for(int i = q->front; i != q->back; (i++) % q->size) { printf("%d ", q->array[i]); }  
    printf("\n");

}   