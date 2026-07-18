#include <stdio.h>

int compareStrings(char *str1, char *str2);

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    if(compareStrings(str1, str2))
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    return 0;
}

int compareStrings(char *str1, char *str2)
{
    while(*str1 != '\0' && *str2 != '\0')
    {
        if(*str1 != *str2)
            return 0;

        str1++;
        str2++;
    }

    return (*str1 == *str2);
}