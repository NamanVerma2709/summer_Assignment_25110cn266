#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee emp[100];
int n = 0;

void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[n].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[n].name);

    printf("Enter Salary: ");
    scanf("%f", &emp[n].salary);

    n++;

    printf("\nEmployee Added Successfully!\n");
}

void displayEmployees()
{
    if(n == 0)
    {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\n---------------------------------------------\n");
    printf("ID\tName\t\tSalary\n");
    printf("---------------------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].salary);
    }
}

void searchEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(emp[i].id == id)
        {
            printf("\nEmployee Found\n");
            printf("ID     : %d\n", emp[i].id);
            printf("Name   : %s\n", emp[i].name);
            printf("Salary : %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found!\n");
}

void updateSalary()
{
    int id, found = 0;

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(emp[i].id == id)
        {
            printf("Enter New Salary: ");
            scanf("%f", &emp[i].salary);

            printf("Salary Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found!\n");
}

void deleteEmployee()
{
    int id, found = 0;

    printf("\nEnter Employee ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(emp[i].id == id)
        {
            for(int j = i; j < n - 1; j++)
            {
                emp[j] = emp[j + 1];
            }

            n--;

            printf("Employee Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Employee Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateSalary();
                break;

            case 5:
                deleteEmployee();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}