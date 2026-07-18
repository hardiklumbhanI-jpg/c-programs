#include <stdio.h>

int main()
{
    int age;
    char citizen;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you an Indian citizen? (Y/N): ");
    scanf(" %c", &citizen);

    if (age >= 18)
    {
        if (citizen == 'Y' || citizen == 'y')
        {
            printf("You are eligible to vote.\n");
        }
        else
        {
            printf("You are not an Indian citizen.\n");
        }
    }
    else
    {
        printf("You are under 18 years old.\n");
    }

    return 0;
}