#include <stdio.h>

int main()
{
    int age = 20;

    printf("AND : %d\n", age > 18 && age < 30);
    printf("OR  : %d\n", age < 18 || age == 20);
    printf("NOT : %d\n", !(age == 20));

    return 0;
}