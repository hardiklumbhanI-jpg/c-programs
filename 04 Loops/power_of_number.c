#include <stdio.h>

int main()
{
    int base, exponent, i;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}