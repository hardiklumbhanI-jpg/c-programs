#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n, i;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == INT_MAX)
        printf("Second smallest element does not exist.\n");
    else
        printf("Second Smallest Element = %d\n", secondSmallest);

    return 0;
}