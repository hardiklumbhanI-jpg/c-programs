#include <stdio.h>

struct Address
{
    char city[50];
    char state[50];
};

struct Student
{
    int rollNo;
    char name[50];
    struct Address address;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter City: ");
    scanf(" %[^\n]", s.address.city);

    printf("Enter State: ");
    scanf(" %[^\n]", s.address.state);

    printf("\n===== Student Details =====\n");
    printf("Roll No : %d\n", s.rollNo);
    printf("Name    : %s\n", s.name);
    printf("City    : %s\n", s.address.city);
    printf("State   : %s\n", s.address.state);

    return 0;
}