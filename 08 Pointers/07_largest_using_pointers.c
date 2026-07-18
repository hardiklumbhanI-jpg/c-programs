#include <stdio.h>

int largest(int *a, int *b);

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Largest Number = %d\n", largest(&x, &y));

    return 0;
}

int largest(int *a, int *b)
{
    if(*a > *b)
        return *a;
    else
        return *b;
}