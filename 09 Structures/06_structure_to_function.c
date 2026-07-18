#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void display(struct Student s);

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}

void display(struct Student s)
{
    printf("\n----- Student Details -----\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);
}