#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

typedef struct{
    int* array;
    int size;
    int data;
    
}PriorityQueue;

int heapMaximum(int* array);
int heapExtractMax(int* array, int size);
