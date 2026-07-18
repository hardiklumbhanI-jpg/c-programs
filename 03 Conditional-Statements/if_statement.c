#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is a Positive Number.\n", number);
    }

    printf("Program Ended.\n");

    return 0;
}