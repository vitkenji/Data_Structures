#include "queueexercises.h"
#include <time.h>

#define N 10

int main()
{
    Queue* q = createQueue(10);

    int x = dequeue(q);
    printQueue(q);
    enqueue(q, 4);
    printQueue(q);

    
    
}

