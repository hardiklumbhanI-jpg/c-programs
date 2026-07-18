#include <stdio.h>

int main()
{
    float num1, num2;
    char op;

    printf("Enter expression (Example: 10 + 5): ");
    scanf("%f %c %f", &num1, &op, &num2);

    if (op == '+')
        printf("Result = %.2f\n", num1 + num2);
    else if (op == '-')
        printf("Result = %.2f\n", num1 - num2);
    else if (op == '*')
        printf("Result = %.2f\n", num1 * num2);
    else if (op == '/')
    {
        if (num2 != 0)
            printf("Result = %.2f\n", num1 / num2);
        else
            printf("Division by zero is not allowed.\n");
    }
    else
        printf("Invalid Operator!\n");

    return 0;
}