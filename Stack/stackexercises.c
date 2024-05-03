#include "stackexercises.h"

void removeEvenData(Stack* s)
{
    Stack* odd = createStack(s->size);
    int data;

    while(!emptyStack(s))
    {
        data = pop(s);
        
        if(data % 2 != 0) { push(odd, data); }
    
    }

    while(!emptyStack(odd))
    {
        push(s, pop(odd));

    }

}

void timeComplexity()
{
    /*
    push both cases: O(1)
    pop both cases: O(1)
    peek both cases: O(1)
    empty both cases: O(1)
    */
}

void reverse (Queue *q)
{
    Stack* s = createStack(50);
    while(!emptyQueue(q))
    {
        push(s, dequeue(q));

    }
    while(!emptyStack(s))
    {
        enqueue(q, pop(s));

    }
   
}

void prime_factorization (int n)
{
   int fac, isPrime, div, original = n;
   Stack* output = createStack(2000);
   Stack* primeNumbers = createStack(2000);
   Stack* factors = createStack(2000);

    for(int i = 2; i < n; i++)
    {
        isPrime = 1;
        fac = i;
        div = 2;
        while(div < fac)
        {
            if(fac % div == 0){isPrime = 0;}
            div++;
        }
        if(isPrime){push(primeNumbers, fac);}
    }
    //printStack(factors);
    while(!emptyStack(primeNumbers))
    {
        push(factors, pop(primeNumbers));

    }
   
    
    while(n != 1)
    {
        fac = pop(factors);
        while(n % fac == 0)
        {
            n /= fac;
            push(output, fac);
           
        }

    }

   printf("%d = ", original); 
   while(!emptyStack(output)){printf("%d * ", pop(output));}

}

void game (Stack *stack_player_a, Stack *stack_player_b)
{
    printStack(stack_player_a);
    printStack(stack_player_b);

    int n1, n2, enter;
    while(!emptyStack(stack_player_a) && !emptyStack(stack_player_b))
    {
        n1 = pop(stack_player_a); n2 = pop(stack_player_b);

        printf("n1: %d ", n1); printf("n2: %d ", n2);
        scanf("%d", &enter);

        if(n1 > n2)
        {
            for(int i = 0; i < n1 - n2; i++)
            {
                if(!emptyStack(stack_player_a)){push(stack_player_b, pop(stack_player_a));}
                
            }
        }    

        else if(n2 > n1)
        {
             for(int i = 0; i < n2 - n1; i++)
            {
                if(!emptyStack(stack_player_b)){push(stack_player_a, pop(stack_player_b));}
                
            }
            
        }
        
        printStack(stack_player_a);
        printStack(stack_player_b);

    }

    if(emptyStack(stack_player_a)){printf("player A wins");}
    else if(emptyStack(stack_player_b)){printf("player B wins");}


}