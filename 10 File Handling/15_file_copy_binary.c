#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source, *destination;
    char buffer;

    source = fopen("student.dat", "rb");

    if(source == NULL)
    {
        printf("Source file not found.\n");
        return 1;
    }

    destination = fopen("student_copy.dat", "wb");

    if(destination == NULL)
    {
        printf("Unable to create destination file.\n");
        fclose(source);
        return 1;
    }

    while(fread(&buffer, sizeof(char), 1, source) == 1)
    {
        fwrite(&buffer, sizeof(char), 1, destination);
    }

    fclose(source);
    fclose(destination);

    printf("Binary file copied successfully.\n");

    return 0;
}