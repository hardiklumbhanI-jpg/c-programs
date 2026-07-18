#include <stdio.h>

int multiply(int a, int b);

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Multiplication = %d\n", multiply(x, y));

    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}