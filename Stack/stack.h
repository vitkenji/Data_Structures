#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int size;
    int* array;
    int peek;

}Stack;

Stack* createStack(int size);
int fullStack(Stack* s);
int emptyStack(Stack* s);
void push(Stack* s, int data);
int pop(Stack* s);
void printStack(Stack* s);
int getPeek(Stack* s);

typedef struct
{
    int* array;
    int size;
    int front;
    int back;

}Queue;

Queue* createQueue(int size);
int fullQueue(Queue* q);
int emptyQueue(Queue* q);
int front(Queue* q);
void enqueue(Queue* q, int data);
int dequeue(Queue* q);
void printQueue(Queue* q);