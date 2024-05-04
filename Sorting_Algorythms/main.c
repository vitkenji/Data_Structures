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
    printf("selectionSort: \n");
   selectionSort(array, SIZE);

    printArray(array, SIZE);

    free(array);
    return 0;
}