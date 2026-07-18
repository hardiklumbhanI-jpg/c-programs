#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \n");
    char *words[50];
    int count = 0, i;

    while(token != NULL)
    {
        words[count++] = token;
        token = strtok(NULL, " \n");
    }

    printf("Sentence after reversing words:\n");

    for(i = count - 1; i >= 0; i--)
    {
        printf("%s ", words[i]);
    }

    return 0;
}