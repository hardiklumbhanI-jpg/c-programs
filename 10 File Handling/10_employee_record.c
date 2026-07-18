#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    FILE *fp;
    struct Employee emp;

    fp = fopen("employees.txt", "a");

    if(fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fprintf(fp, "%d %s %.2f\n", emp.id, emp.name, emp.salary);

    fclose(fp);

    printf("Employee record saved successfully.\n");

    return 0;
}