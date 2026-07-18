#include <stdio.h>

long long power(int base, int exponent);

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %lld\n", base, exponent, power(base, exponent));

    return 0;
}

long long power(int base, int exponent)
{
    int i;
    long long result = 1;

    for(i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return result;
}