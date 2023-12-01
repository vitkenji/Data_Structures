#include "exercises.h"
#include <time.h>

#define N 10

int main()
{
    Queue* q = create(50);
    for(int i = 0; i  < 10; i++)
    {
        enqueue(q, i + 1);

    }
    printf("before: "); printQueue(q);
    q = reverse(q);
   printf("reversed: "); printQueue(q);
    return 0;
    
}