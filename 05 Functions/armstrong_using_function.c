#include <stdio.h>

int armstrong(int num);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(armstrong(number))
        printf("%d is an Armstrong Number.\n", number);
    else
        printf("%d is Not an Armstrong Number.\n", number);

    return 0;
}

int armstrong(int num)
{
    int original = num;
    int sum = 0;

    while(num != 0)
    {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return (sum == original);
}