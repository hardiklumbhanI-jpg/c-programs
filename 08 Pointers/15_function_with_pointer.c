#include <stdio.h>

void increment(int *num);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Before Increment = %d\n", number);

    increment(&number);

    printf("After Increment = %d\n", number);

    return 0;
}

void increment(int *num)
{
    (*num)++;
}