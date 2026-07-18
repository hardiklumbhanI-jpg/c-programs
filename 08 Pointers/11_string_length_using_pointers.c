#include <stdio.h>

int stringLength(char *str);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length = %d\n", stringLength(str));

    return 0;
}

int stringLength(char *str)
{
    int length = 0;

    while(*str != '\0' && *str != '\n')
    {
        length++;
        str++;
    }

    return length;
}