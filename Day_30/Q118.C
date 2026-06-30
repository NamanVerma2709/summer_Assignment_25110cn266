#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;
};

struct Book b[100];
int n = 0;

void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b[n].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b[n].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[n].author);

    b[n].issued = 0;
    n++;

    printf("\nBook Added Successfully!\n");
}

void displayBooks()
{
    if(n == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n------------------------------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
    printf("------------------------------------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\n",
               b[i].id,
               b[i].title,
               b[i].author,
               b[i].issued ? "Issued" : "Available");
    }
}

void searchBook()
{
    int id, found = 0;

    printf("\nEnter Book ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(b[i].id == id)
        {
            printf("\nBook Found\n");
            printf("ID     : %d\n", b[i].id);
            printf("Title  : %s\n", b[i].title);
            printf("Author : %s\n", b[i].author);
            printf("Status : %s\n",
                   b[i].issued ? "Issued" : "Available");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found!\n");
}

void issueBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(b[i].id == id)
        {
            if(b[i].issued)
                printf("Book Already Issued!\n");
            else
            {
                b[i].issued = 1;
                printf("Book Issued Successfully!\n");
            }

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found!\n");
}

void returnBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Return: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(b[i].id == id)
        {
            if(!b[i].issued)
                printf("Book is Already Available!\n");
            else
            {
                b[i].issued = 0;
                printf("Book Returned Successfully!\n");
            }

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
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