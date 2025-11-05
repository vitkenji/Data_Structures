#include "stack.h"

int shouldPush()
{
    Stack* s = createStack(5);

    for(int i = 0; i < 5; i++)
    {
        push(s, i);
    }

    return s->peek == 5;
}

int shouldPop()
{
    Stack* s = createStack(5);

    for(int i = 0; i < 5; i++)
    {
        push(s, i);
    }

    return pop(s) == 4;
}

int shouldReturnIfEmptyStack()
{
    Stack* s = createStack(5);
    return emptyStack(s);
}

int shouldReturnIfFullStack()
{
    Stack* s = createStack(2);
    push(s,1);
    push(s,2);
    return fullStack(s);
}

int fullTest()
{
    Stack* s = createStack(5);
    for (int i = 1; i <= 5; i++)
    {
        push(s, i * 10);
    }
    printStack(s);
    if (!fullStack(s)) { return 0; }

    int expected = 50;
    while (!emptyStack(s))
    {
        int data = pop(s);
        if (data != expected) { return 0; }
        expected -= 10;
    }
    printStack(s);

    push(s, 5);
    push(s, 10);
    printStack(s);
    pop(s);
    printStack(s);

    for (int i = 45; i < 49; i++)
    {
        push(s, i);
    }
    printStack(s);

    pop(s);
    pop(s);
    printStack(s);

    for (int i = 3; i < 5; i++)
    {
        push(s, i);
    }
    printStack(s);

    return fullStack(s);
}
int main()
{
    int tests_passed = 0;
    int tests_failed = 0;
    shouldPush() == 1 ? tests_passed++ : tests_failed++;
    shouldPop() == 1 ? tests_passed++ : tests_failed++;
    shouldReturnIfEmptyStack() == 1 ? tests_passed++ : tests_failed++;
    shouldReturnIfFullStack() == 1 ? tests_passed++ : tests_failed++;
    fullTest() == 1 ? tests_passed++ : tests_failed++;
    printf("%d Tests passed\n", tests_passed);
    printf("%d Tests failed\n", tests_failed);

    return 0;
}