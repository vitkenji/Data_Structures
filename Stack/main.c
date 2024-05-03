#include "stackexercises.h"
#include <time.h>
//ok 
int main()
{
    Stack* s = createStack(3);
    push(s, 1);
    push(s, 2);
    push(s, 3);
       
    printStack(s);

   return 0;
}
