#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = arr;

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Reversed Array:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}