#include "queueexercises.h"
#include <time.h>

#define N 10

int shouldEnqueue()
{
    Queue* q = createQueue(N);

    for(int i = 0; i < 5; i++)
    {
    	enqueue(q, i);
    }
    if (q->back == 5)
    {
        return 1;
    }
    return 0;
}

int shouldDequeue()
{
    Queue* q = createQueue(N);

    enqueue(q,12);

    if (dequeue(q) == 12)
    {
        return 1;
    }
    return 0;
}

int shouldReturnIfEmptyQueue()
{
    Queue* q = createQueue(N);
    return emptyQueue(q);
}

int shouldReturnIfFullQueue()
{
    Queue* q = createQueue(2);
    enqueue(q, 1);
    enqueue(q,3);
    return fullQueue(q);
}

int fullTest()
{
    Queue* q = createQueue(5);
    for(int i = 1; i <= 5; i++)
    {
    	enqueue(q, i*10);
    }

    printQueue(q);
    if (!fullQueue(q)){return 0;}
    
    int i = 10;
    while(!emptyQueue(q))
    {
        int data = dequeue(q);
        if (data != i) {return 0;}
        i += 10;
    }
    printQueue(q);
    enqueue(q,0);
    enqueue(q,10);
    printQueue(q);
    i = dequeue(q);
    printQueue(q);
    for(int i = 45; i < 49; i++)
    {
    	enqueue(q, i);
    }

    printQueue(q);
    
    i = dequeue(q);
    i = dequeue(q);
    printQueue(q);
    for(int i = 3; i < 5; i++)
    {
    	enqueue(q, i);
    }
    printQueue(q);
    return fullQueue(q);
}

int main()
{
    int tests_passed = 0;
    int tests_failed = 0;
    shouldEnqueue() == 1 ? tests_passed++ : tests_failed++;
    shouldDequeue() == 1 ? tests_passed++ : tests_failed++;
    shouldReturnIfEmptyQueue() == 1 ? tests_passed++ : tests_failed++;
    shouldReturnIfFullQueue() == 1 ? tests_passed++ : tests_failed++;
    fullTest() == 1 ? tests_passed++ : tests_failed++;
    printf("%d Tests passed\n", tests_passed);
    printf("%d Tests failed\n", tests_failed);

    return 1;
}