#include <stdio.h>

typedef struct
{
    int rollNo;
    char name[50];
    float marks;
} Student;

int main()
{
    Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n----- Student Details -----\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);

    return 0;
}