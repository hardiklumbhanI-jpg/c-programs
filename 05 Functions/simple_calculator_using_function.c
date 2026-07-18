#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float num1, num2;
    char op;

    printf("Enter expression (Example: 10 + 5): ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
        case '+':
            printf("Result = %.2f\n", add(num1, num2));
            break;

        case '-':
            printf("Result = %.2f\n", subtract(num1, num2));
            break;

        case '*':
            printf("Result = %.2f\n", multiply(num1, num2));
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %.2f\n", divide(num1, num2));
            else
                printf("Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}