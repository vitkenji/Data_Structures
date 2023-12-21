#include "linkedlistexercises.h"
#include <time.h>

int main()
{
    List* l = create();
  
    l = insert_sort(l, 6);
       printList(l);
    l = insert_sort(l, 7);
       printList(l);
     l = insert_sort(l, 1);
        printList(l);
      l = insert_sort(l, 0);
         printList(l);
     l = insert_sort(l, 4);
    printList(l);
    return 0;
}
