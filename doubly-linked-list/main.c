#include "dllist.h"
int shouldInsertBack()
{
    DLList* l = create();
    l = insertBack(l, 10);
    return l->data == 10;
}

int shouldInsertFront()
{
    DLList* l = create();
    l = insertBack(l, 10);
    l = insertBack(l, 20);
    l = insertFront(l, 30);
    DLList* t = l;
    while (t->next != NULL)
    {
        t = t->next;
    }
    return l->data == 20 && t->data == 30;
}

int shouldRemove()
{
    DLList* l = create();
    for (int i = 1; i <= 5; i++)
    {
        l = insertFront(l, i * 10);
    }
    l = removeData(l, 20);
    return search(l, 20) == NULL;
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
    int passed = 1;

    l = insertBack(l, 10);
    l = insertBack(l, 20);
    l = insertBack(l, 30);

    if (search(l, 10) == NULL || search(l, 20) == NULL || search(l, 30) == NULL)
        passed = 0;

    l = removeData(l, 10);
    l = removeData(l, 20);
    l = removeData(l, 30);

    if (search(l, 10) != NULL || search(l, 20) != NULL || search(l, 30) != NULL)
        passed = 0;

    l = insertFront(l, 100);
    l = insertFront(l, 200);
    l = insertFront(l, 300);

    if (search(l, 100) == NULL || search(l, 200) == NULL || search(l, 300) == NULL)
        passed = 0;

    l = removeData(l, 100);
    l = removeData(l, 200);
    l = removeData(l, 300);

    if (search(l, 100) != NULL || search(l, 200) != NULL || search(l, 300) != NULL)
        passed = 0;

    l = insertBack(l, 1);
    l = insertFront(l, 2);
    l = insertBack(l, 3);
    l = removeData(l, 2);
    l = insertFront(l, 4);
    l = removeData(l, 1);
    l = insertBack(l, 5);

    if (search(l, 3) == NULL || search(l, 4) == NULL || search(l, 5) == NULL)
        passed = 0;

    if (search(l, 1) != NULL || search(l, 2) != NULL)
        passed = 0;

    return passed;
}
  
int main()
{
    int tests_passed = 0;
    int tests_failed = 0;
    shouldInsertBack() == 1 ? tests_passed++ : tests_failed++;
    shouldInsertFront() == 1 ? tests_passed++ : tests_failed++;
    shouldSearch() == 1 ? tests_passed++ : tests_failed++;
    shouldRemove() == 1 ? tests_passed++ : tests_failed++;
    fullTest() == 1 ? tests_passed++ : tests_failed++;

    printf("%d Tests passed\n", tests_passed);
    printf("%d Tests failed\n", tests_failed);

    return 0;
}