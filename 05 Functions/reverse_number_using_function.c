#include <stdio.h>

int reverseNumber(int num);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reversed Number = %d\n", reverseNumber(number));

    return 0;
}

int reverseNumber(int num)
{
    int reverse = 0;

    while(num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    return reverse;
}