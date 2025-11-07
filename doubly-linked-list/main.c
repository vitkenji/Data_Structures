#include "dllist.h"

int shouldInsertBack()
{
    DLList* l = create();
    l = insert(l, 10);
    return l->data == 10;
}

int shouldInsertFront()
{
    DLList* l = create();
    l = insert(l, 10);
    return l->data == 10;
}


int shouldRemove()
{
    DLList* l = create();
    for (int i = 1; i <= 5; i++)
    {
        l = insertFront(l, i * 10);
    }
    l = removeData(l, 10);
    return search(l, 10) == NULL;
}

int shouldSearch()
{
    DLList* l = create();
    for (int i = 1; i <= 5; i++)
    {
        l = insertBack(l, i * 10);
    }
    return search(l, 30)->data == 30;
}

int fullTest()
{
   DLList* l = create();

    for (int i = 1; i <= 5; i++)
    {
        l = insert(l, i * 10);
    }

    printList(l);

    for (int i = 1; i <= 5; i++)
    {
        DLList* found = search(l, i * 10);
        if (found == NULL || found->data != i * 10)
            return 0;
    }

    l = removeData(l, 20);
    l = removeData(l, 40);

    printList(l);

    if (search(l, 20) != NULL) return 0;
    if (search(l, 40) != NULL) return 0;

    if (search(l, 10) == NULL) return 0;
    if (search(l, 30) == NULL) return 0;
    if (search(l, 50) == NULL) return 0;

    l = insert(l, 60);
    l = insert(l, 70);

    printList(l);

    if (search(l, 60) == NULL) return 0;
    if (search(l, 70) == NULL) return 0;

    return 1;  
}

int main()
{
    int tests_passed = 0;
    int tests_failed = 0;
    /*
    shouldInsertBack() == 1 ? tests_passed++ : tests_failed++;
    shouldInsertFront() == 1 ? tests_passed++ : tests_failed++;
    shouldRemove() == 1 ? tests_passed++ : tests_failed++;
    shouldSearch() == 1 ? tests_passed++ : tests_failed++;
    fullTest() == 1 ? tests_passed++ : tests_failed++;
    */
    printf("%d Tests passed\n", tests_passed);
    printf("%d Tests failed\n", tests_failed);

    return 0;
}