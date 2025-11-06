#include "linkedlist.h"

int main()
{
    List* l = create();
    l = insert(l, 10);
    l = insert(l, 2);
    l = insert(l, 7);
    l = insert(l, 9);
    printList(l);
    l = search(l, 3);

    return 0;
}
