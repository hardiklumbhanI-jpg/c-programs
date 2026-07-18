#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;

    fp = fopen("student.dat", "rb");

    if(fp == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    fread(&s, sizeof(struct Student), 1, fp);

    printf("\nStudent Record\n");
    printf("Roll No : %d\n", s.rollNo);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);

    fclose(fp);

    return 0;
}