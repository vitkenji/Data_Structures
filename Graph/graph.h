#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;

}Node;

typedef struct Lgraph{
    int E;
    int V;
    Node** adj;
    
}LGraph;

typedef struct Mgraph{
    int E;
    int V;
    int** matrix;

}MGraph;

void printLGraph(LGraph* G, int size);
void printMGraph(MGraph* G, int size);