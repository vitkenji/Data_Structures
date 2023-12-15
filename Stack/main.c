#include "stackexercises.h"
#include <time.h>

int main()
{
    srand(time(NULL));

    Stack* stackA = createStack(50);
    Stack* stackB = createStack(50);

    for(int i = 0; i < 10; i++)
    {
        push(stackA, rand()%10);
        push(stackB, rand()%10);
    }
    game(stackA, stackB);
    
   return 0;
}
