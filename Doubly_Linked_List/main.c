#include "dllistexercises.h"

int main()
{
    DLList* l = create();
    l = insertBack(l, 3);
    l = insertBack(l, 7);
    l = insertBack(l, 2);
    l = insertFront(l, 9);
    l = insertFront(l, 5);
    printDLList(l);
    l = search(l, 9);

    return 0;

}