#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nReverse Multiplication Table of %d\n", n);

    for (i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}