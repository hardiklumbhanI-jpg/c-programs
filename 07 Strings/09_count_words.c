#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if(str[0] == '\0')
    {
        words = 0;
    }
    else
    {
        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] == ' ')
                words++;
        }
    }

    printf("Number of Words = %d\n", words);

    return 0;
}