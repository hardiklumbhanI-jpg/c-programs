#include <stdio.h>

int add(int a, int b);

int main()
{
    int (*funcPtr)(int, int);

    funcPtr = add;

    printf("Sum = %d\n", funcPtr(10, 20));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}