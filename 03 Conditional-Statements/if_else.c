#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are Eligible to Vote.\n");
    }
    else
    {
        printf("You are Not Eligible to Vote.\n");
    }

    return 0;
}