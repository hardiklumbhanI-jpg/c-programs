#include <stdio.h>

long long factorial(int n);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial of a negative number is not defined.\n");
    }
    else
    {
        printf("Factorial = %lld\n", factorial(num));
    }

    return 0;
}

long long factorial(int n)
{
    int i;
    long long fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}