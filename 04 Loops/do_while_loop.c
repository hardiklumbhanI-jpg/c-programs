#include <stdio.h>

int main()
{
    int i = 1;

    printf("Numbers from 1 to 10 using do-while loop:\n");

    do
    {
        printf("%d ", i);
        i++;
    }
    while (i <= 10);

    return 0;
}