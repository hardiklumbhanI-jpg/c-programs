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
    struct Student s;
    FILE *fp;

    fp = fopen("student.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.rollNo, s.name, s.marks);

    fclose(fp);

    printf("Student record saved successfully in student.txt\n");

    return 0;
}