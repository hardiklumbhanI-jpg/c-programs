#include <stdio.h>

void copyString(char *source, char *destination);

int main()
{
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    copyString(source, destination);

    printf("Copied String: %s", destination);

    return 0;
}

void copyString(char *source, char *destination)
{
    while(*source != '\0')
    {
        *destination = *source;
        source++;
        destination++;
    }

    *destination = '\0';
}