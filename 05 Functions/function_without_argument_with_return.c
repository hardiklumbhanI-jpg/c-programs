#include <stdio.h>

int getNumber();

int main()
{
    int number;

    number = getNumber();

    printf("You entered: %d\n", number);

    return 0;
}

int getNumber()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    return n;
}