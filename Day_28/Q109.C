#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int issued;
};

struct Book b[100];
int count = 0;

void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b[count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[count].author);

    b[count].issued = 0;
    count++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks()
{
    if(count==0)
    {
        printf("\nNo Books Available.\n");
        return;
    }

    printf("\nID\tBook\t\tAuthor\t\tStatus\n");

    for(int i=0;i<count;i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\n",
        b[i].id,
        b[i].name,
        b[i].author,
        b[i].issued?"Issued":"Available");
    }
}

void searchBook()
{
    int id;

    printf("\nEnter Book ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(b[i].id==id)
        {
            printf("\nBook Found\n");
            printf("Name : %s\n",b[i].name);
            printf("Author : %s\n",b[i].author);
            printf("Status : %s\n",b[i].issued?"Issued":"Available");
            return;
        }
    }

    printf("Book Not Found!\n");
}

void issueBook()
{
    int id;

    printf("\nEnter Book ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(b[i].id==id)
        {
            if(b[i].issued)
                printf("Book Already Issued!\n");
            else
            {
                b[i].issued=1;
                printf("Book Issued Successfully!\n");
            }
            return;
        }
    }

    printf("Book Not Found!\n");
}

void returnBook()
{
    int id;

    printf("\nEnter Book ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(b[i].id==id)
        {
            if(!b[i].issued)
                printf("Book Already Available!\n");
            else
            {
                b[i].issued=0;
                printf("Book Returned Successfully!\n");
            }
            return;
        }
    }

    printf("Book Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Library Management System =====");
        printf("\n1.Add Book");
        printf("\n2.Display Books");
        printf("\n3.Search Book");
        printf("\n4.Issue Book");
        printf("\n5.Return Book");
        printf("\n6.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: printf("Thank You!\n"); break;
            default: printf("Invalid Choice!\n");
        }

    }while(choice!=6);

    return 0;
}