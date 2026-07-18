#include <stdio.h>

float divide(float a, float b);

int main()
{
    float x, y;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    if (y == 0)
    {
        printf("Division by zero is not allowed.\n");
    }
    else
    {
        printf("Division = %.2f\n", divide(x, y));
    }

    return 0;
}

float divide(float a, float b)
{
    return a / b;
}