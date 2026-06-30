#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

struct Contact c[100];
int n = 0;

void addContact()
{
    printf("\nEnter Name: ");
    scanf(" %[^\n]", c[n].name);

    printf("Enter Phone Number: ");
    scanf("%s", c[n].phone);

    n++;

    printf("Contact Added Successfully!\n");
}

void displayContacts()
{
    if(n == 0)
    {
        printf("\nNo Contacts Found!\n");
        return;
    }

    printf("\n----- Contact List -----\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", c[i].name);
        printf("Phone : %s\n", c[i].phone);
    }
}

void searchContact()
{
    char name[50];
    int found = 0;

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            printf("\nContact Found\n");
            printf("Name  : %s\n", c[i].name);
            printf("Phone : %s\n", c[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Contact Not Found!\n");
}

void deleteContact()
{
    char name[50];
    int found = 0;

    printf("\nEnter Name to Delete: ");
    scanf(" %[^\n]", name);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(c[i].name, name) == 0)
        {
            for(int j = i; j < n - 1; j++)
            {
                c[j] = c[j + 1];
            }

            n--;
            found = 1;
            printf("Contact Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Contact Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====");
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Delete Contact");
        printf("\n5. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}