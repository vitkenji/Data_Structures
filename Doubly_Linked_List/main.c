#include "dllistexercises.h"

int main()
{
    DLList* l = create();
    for(int i = 10; i >= 0; i++)
    {
        l = insertBack(l, i);
    }
    printDLList(l);
    l = split(l, 3, 7);
    printDLList(l);
    return 0;

}