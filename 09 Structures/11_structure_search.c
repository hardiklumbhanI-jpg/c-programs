#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i, searchRoll, found = 0;

    printf("Enter Details of 5 Students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < 5; i++)
    {
        if(s[i].rollNo == searchRoll)
        {
            found = 1;

            printf("\nStudent Found\n");
            printf("Roll No : %d\n", s[i].rollNo);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);

            break;
        }
    }

    if(found == 0)
        printf("Student Not Found.\n");

    return 0;
}