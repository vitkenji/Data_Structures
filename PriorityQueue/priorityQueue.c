#include "priorityQueue.h"

int heapMaximum(int* array)
{
    return array[0];
}

int heapExtractMax(int* array, int size)
{
    if(size < 1)
    {
        printf("heap underflow");
        exit(1);
    }
    int max = array[0];
    array[0] = array[size -1];
    size--;
    maxHeapify(array, size, 0);
    return max;
}