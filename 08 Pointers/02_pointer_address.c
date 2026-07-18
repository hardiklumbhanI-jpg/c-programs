#include <stdio.h>

int main()
{
    int num = 25;
    int *ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("Pointer stores = %p\n", (void *)ptr);

    return 0;
}