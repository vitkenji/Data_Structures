#include "queueexercises.h"
#include <time.h>

#define N 10

int main()
{
    Queue* q = createQueue(10);
    
    for(int i = 0; i < 9; i++)
    {
    	enqueue(q, i);
    }
    
    printQueue(q);
    return 1;
}

int shouldEnqueue()
{
    return 1;
}

int shouldDequeue()
{
    return 1;
}

int shouldNotEnqueueFullQueue()
{
    return 1;
}

int shouldNotDequeueEmptyQueue()
{
    return 1;
}
