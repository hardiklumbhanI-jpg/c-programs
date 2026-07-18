#include <stdio.h>

void fibonacci(int n);

int main()
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}

void fibonacci(int n)
{
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series:\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
}