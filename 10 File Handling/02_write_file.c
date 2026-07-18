#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("sample.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}