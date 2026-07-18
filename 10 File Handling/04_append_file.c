#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("sample.txt", "a");

    if(fp == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}