#include "heap.h"
#define SIZE 10

int main()
{
    int* array = (int*) malloc(sizeof(int)*SIZE);
    
    for(int i = 0; i < SIZE;i++)
    {
        array[i] = i + 1; 
    }
    printArray(array, SIZE);
    buildMinHeap(array, SIZE);
    printArray(array, SIZE);

    return 0;
}