#include "sorting.h"

void bubbleSort(int* array, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(array[i] > array[j])
            {
                swap(array, i, j);
            }
        }
    }
}

void insertionSort(int* array, int size)
{
    int i, key;
    for(int j = 1; j < size; j++)
    {
        key = array[j];
        i = j - 1;
        while(i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            i--; 
        }
        array[i + 1] = key;
    }
}

void mergeSort(int* array, int p, int r) //0 8
{
    if(p < r)
    {
        int q = (p + r) / 2;
        mergeSort(array, p, q); 
        mergeSort(array, q + 1, r);
        merge(array, p, q, r); // 0 4 8
    }
}
                                
void merge(int* array, int p, int q, int r) // 0 4 8
{  
    int n1 = q - p + 1; // 5
    int n2 = r - q; // 4

    int* L = (int*) malloc(sizeof(int)*n1);
    int* R = (int*) malloc(sizeof(int)*n2);

    for(int i = 0; i < n1; i++) //
    {
        L[i] = array[i];
    }
    printArray(L, n1);

    for(int j = 0; j < n2; j++)
    {
        R[j] = array[q + 1 + j];
    }
    printArray(R, n2);
    
    int i = 0; int j = 0;

    for(int k = p; k < r; k++)
    {
       if(L[i] < R[j])
       {
        array[k] = L[i];
        i++;
       }
       else
       {
        array[k] = R[j];
        j++;
       }
    }


}

void printArray(int* array, int size)
{
    printf("array: ");
    for(int i = 0; i != size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int* array, int pos1, int pos2)
{
    int aux = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = aux;
}