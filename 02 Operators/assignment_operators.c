#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial Value : %d\n", a);

    a += 5;
    printf("After += 5 : %d\n", a);

    a -= 2;
    printf("After -= 2 : %d\n", a);

    a *= 3;
    printf("After *= 3 : %d\n", a);

    a /= 2;
    printf("After /= 2 : %d\n", a);

    return 0;
}