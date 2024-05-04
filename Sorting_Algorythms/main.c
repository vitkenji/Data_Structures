#define SIZE 10
#include "sorting.h"

int main()
{
    srand(time(NULL));
    int* array = (int*) malloc(sizeof(int)*SIZE);
    int k = 10;
    for(int i = 0; i < SIZE; i++)
    {
        array[i] = k;
        k--;
    }

   printArray(array, SIZE);
    
   mergeSort(array, 0, SIZE - 1);

    printArray(array, SIZE);

    free(array);
    return 0;
}