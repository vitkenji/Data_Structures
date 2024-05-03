#include "queueexercises.h"
#include <time.h>
#define N 10

void oddEven(Queue* q)
{
    Queue* odd = createQueue(N);
    Queue* even = createQueue(N);
    int data;

    while(!emptyQueue(q))
    {
        data = dequeue(q);
        if(data % 2 == 0){enqueue(even, data);}
        else{enqueue(odd, data);}

    }

    printf("Odd: "); printQueue(odd);
    printf("Even: "); printQueue(even);

}

void casino()
{
    srand(time(NULL));
    Queue* q1 = createQueue(N);
    Queue* q2 = createQueue(N);
    Queue* q3 = createQueue(N);
    int data;
    int result1, result2, result3;
    int key;
    
    while(1)
    {
        for(int i = 1; i != 10; i++)
        {
            enqueue(q1, i);
            enqueue(q2, i);
            enqueue(q3, i);

        }
        
        for(int i = 0; i < rand()%10; i++){data = dequeue(q1); }
        for(int i = 0; i < rand()%10; i++){data = dequeue(q2); }
        for(int i = 0; i < rand()%10; i++){data = dequeue(q3); }

        result1 = dequeue(q1);
        result2 = dequeue(q2);
        result3 = dequeue(q3);
        printf("%d %d %d ", result1, result2, result3);

        if(result1 == result2 && result1 == result3){ printf("--> you won!"); exit(1); }
        else{ printf("--> try again");}

        printf("\n");
        scanf("%d", &key);

        while(!emptyQueue(q1)){data = dequeue(q1);}
        while(!emptyQueue(q2)){data = dequeue(q2);}
        while(!emptyQueue(q3)){data = dequeue(q3);}
    }
}

void timeComplexity()
{
    /*
        enqueue: O(1) both cases
        dequeue: O(1) both cases
        full: O(1) both cases
        empty: O(1) both cases
        search: O(1) best case, O(n) worst case
    */
}

Queue* merge (Queue *a, Queue *b)
{
    Queue* q = createQueue(a->size + b->size);

    while(!emptyQueue(a) && !emptyQueue(b))
    { 
        if(front(a) < front(b))
        {
            enqueue(q, dequeue(a)); 
      
        }
        else
        {
            enqueue(q, dequeue(b));
    
        }
    }

    if(emptyQueue(a))
    {
        while(!emptyQueue(b))
        {
            enqueue(q, dequeue(b));
        }
    }

    else if(emptyQueue(b))
    {
        while(!emptyQueue(a))
        {
            enqueue(q, dequeue(a));
          
        }
      
    }

    return q;

}

void JosephusProblem(int size, int death)
{
    Queue* q = createQueue(50);
    for(int i = 1; i <= size; i++){enqueue(q, i);}

    Queue* alive = createQueue(50);

    while(!emptyQueue(q))
    {
        for(int i = 0; i < death - 1; i++)
        {
            enqueue(alive, dequeue(q));
            enqueue(q, dequeue(alive));

        }
        printf("dead: %d \n", dequeue(q));
        
    }
        
}

Queue* reverse (Queue *q)
{
    Queue* t = createQueue(50);
    Queue* r = createQueue(50);
    int size = 0;
    int aux = 0;

    while(!emptyQueue(q))
    {
        enqueue(t, dequeue(q));
        size++;
    }
    aux = size;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < aux - 1; j++) { enqueue(q, dequeue(t)); }
        enqueue(r, dequeue(t));
        aux--;
        while(!emptyQueue(q)){ enqueue(t, dequeue(q)); }
   
    }

    return r;
}
    