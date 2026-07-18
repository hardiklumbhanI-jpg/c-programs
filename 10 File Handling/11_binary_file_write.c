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

    fp = fopen("student.dat", "wb");

    if(fp == NULL)
    {
        printf("Unable to create file.\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, fp);

    fclose(fp);

    printf("Record written successfully.\n");

    return 0;
}