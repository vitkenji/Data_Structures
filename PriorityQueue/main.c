#include "priorityQueue.h"
#define SIZE 10

int main()
{
    int* array = (int*) malloc(sizeof(int)*SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        array[i] = 1 + i;
    }
    buildMaxHeap(array, SIZE);
    printArray(array, SIZE);
    printf("%d\n", heapExtractMax(array, SIZE));
    printArray(array, SIZE - 1);
    return 0;
}