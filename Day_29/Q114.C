#include <stdio.h>

int arr[100], n = 0;

void insert()
{
    int value;

    if(n >= 100)
    {
        printf("Array is Full!\n");
        return;
    }

    printf("Enter Element: ");
    scanf("%d", &value);

    arr[n] = value;
    n++;

    printf("Element Inserted Successfully!\n");
}

void deleteElement()
{
    int value, found = 0;

    if(n == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Enter Element to Delete: ");
    scanf("%d", &value);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            for(int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            n--;
            found = 1;
            printf("Element Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Element Not Found!\n");
}

void search()
{
    int value, found = 0;

    if(n == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Enter Element to Search: ");
    scanf("%d", &value);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            printf("Element Found at Position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element Not Found!\n");
}

void sort()
{
    int temp;

    if(n == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array Sorted Successfully!\n");
}

void reverse()
{
    int temp;

    if(n == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    for(int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Array Reversed Successfully!\n");
}

void display()
{
    if(n == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Array Elements: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== ARRAY OPERATIONS =====");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Search");
        printf("\n4. Sort");
        printf("\n5. Reverse");
        printf("\n6. Display");
        printf("\n7. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert();
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                search();
                break;

            case 4:
                sort();
                break;

            case 5:
                reverse();
                break;

            case 6:
                display();
                break;

            case 7:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}