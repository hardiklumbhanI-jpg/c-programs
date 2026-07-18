#include <stdio.h>

int largest(int a, int b, int c);

int main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Largest Number = %d\n", largest(x, y, z));

    return 0;
}

int largest(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}