#include "linkedlistexercises.h"
#include <time.h>

int main()
{
    List* l = create();
    l = insert(l, 10);
     l = insert(l, 3);
      l = insert(l, 7);
       l = insert(l, 5);
        l = insert(l, 6);
    printList(l);
    
    l = insert_back(l, 9);
    printList(l); 
    return 0;
}
