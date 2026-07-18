#include <stdio.h>

int square(int num);

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = square(n);

    printf("Square = %d\n", result);

    return 0;
}

int square(int num)
{
    return num * num;
}