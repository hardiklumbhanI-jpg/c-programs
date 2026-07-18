#include <stdio.h>

int main()
{
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}