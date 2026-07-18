#include <stdio.h>

void displaySquare(int num);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    displaySquare(n);

    return 0;
}

void displaySquare(int num)
{
    printf("Square = %d\n", num * num);
}