#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;
    printf("\nStudent Added Successfully!\n");
}

void displayStudents()
{
    if(n == 0)
    {
        printf("\nNo Student Records Found!\n");
        return;
    }

    printf("\n------------------------------------------\n");
    printf("Roll\tName\t\tMarks\n");
    printf("------------------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}

void searchStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll  : %d\n", s[i].roll);
            printf("Name  : %s\n", s[i].name);
            printf("Marks : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found!\n");
}

void updateStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Student Record Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found!\n");
}

void deleteStudent()
{
    int roll, found = 0;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(int i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            for(int j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;
            found = 1;
            printf("Student Record Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== STUDENT RECORD MANAGEMENT ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
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