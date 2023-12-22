#include "dllistexercises.h"

int main()
{
    DLList* l = create();
    for(int i = 0; i < 10; i++)
    {
        l = insertBack(l, i);
    }
    printDLList(l);
    l = split(l, 7, 3);
    printDLList(l);
    return 0;

}