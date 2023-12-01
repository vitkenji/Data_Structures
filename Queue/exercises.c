#include "exercises.h"
#include <time.h>
#define N 10

void oddEven(Queue* q)
{
    Queue* odd = create(N);
    Queue* even = create(N);
    int data;

    while(!empty(q))
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
    Queue* q1 = create(N);
    Queue* q2 = create(N);
    Queue* q3 = create(N);
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

        while(!empty(q1)){data = dequeue(q1);}
        while(!empty(q2)){data = dequeue(q2);}
        while(!empty(q3)){data = dequeue(q3);}
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
    Queue* q = create(a->size + b->size);

    while(!empty(a) && !empty(b))
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

    if(empty(a))
    {
        while(!empty(b))
        {
            enqueue(q, dequeue(b));
        }
    }

    else if(empty(b))
    {
        while(!empty(a))
        {
            enqueue(q, dequeue(a));
          
        }
      
    }

    return q;

}

void JosephusProblem(int size, int death)
{
    Queue* q = create(50);
    for(int i = 1; i <= size; i++){enqueue(q, i);}

    Queue* alive = create(50);

    while(!empty(q))
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
    Queue* t = create(50);
    Queue* r = create(50);
    int size = 0;
    int aux = 0;

    while(!empty(q))
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
        while(!empty(q)){ enqueue(t, dequeue(q)); }
   
    }

    return r;
}
    