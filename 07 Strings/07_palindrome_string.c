#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], copy[100];
    int i, length;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    strcpy(copy, str);

    length = strlen(copy);

    for(i = 0; i < length / 2; i++)
    {
        temp = copy[i];
        copy[i] = copy[length - i - 1];
        copy[length - i - 1] = temp;
    }

    if(strcmp(str, copy) == 0)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");

    return 0;
}