#include <stdio.h>

int main()
{
    int num = 50;
    int *ptr = &num;

    printf("Before Modification = %d\n", num);

    *ptr = 100;

    printf("After Modification = %d\n", num);

    return 0;
}