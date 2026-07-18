#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    int marks[3];
};

int main()
{
    struct Student s;
    int i, total = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks of 3 Subjects:\n");

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &s.marks[i]);
        total += s.marks[i];
    }

    printf("\n----- Student Details -----\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);

    printf("Marks : ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", s.marks[i]);
    }

    printf("\nTotal Marks : %d\n", total);
    printf("Average     : %.2f\n", total / 3.0);

    return 0;
}