#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, newSize, i;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Enter new size: ");
    scanf("%d", &newSize);

    ptr = (int *)realloc(ptr, newSize * sizeof(int));

    printf("Enter remaining elements:\n");

    for(i = n; i < newSize; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Updated Array:\n");

    for(i = 0; i < newSize; i++)
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr);

    return 0;
}