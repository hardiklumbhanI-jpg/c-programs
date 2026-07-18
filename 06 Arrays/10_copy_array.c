#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Copied Array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}