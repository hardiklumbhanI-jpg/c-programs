#include <stdio.h>

int main()
{
    int num = 100;
    int *ptr;
    int **pptr;

    ptr = &num;
    pptr = &ptr;

    printf("Value of num = %d\n", num);
    printf("Using Pointer = %d\n", *ptr);
    printf("Using Pointer to Pointer = %d\n", **pptr);

    return 0;
}