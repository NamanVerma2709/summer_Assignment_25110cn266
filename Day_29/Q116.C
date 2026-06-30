#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    float price;
    int quantity;
};

struct Product p[100];
int n = 0;

void addProduct()
{
    printf("\nEnter Product ID: ");
    scanf("%d", &p[n].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", p[n].name);

    printf("Enter Product Price: ");
    scanf("%f", &p[n].price);

    printf("Enter Quantity: ");
    scanf("%d", &p[n].quantity);

    n++;

    printf("\nProduct Added Successfully!\n");
}

void displayProducts()
{
    if(n == 0)
    {
        printf("\nNo Products Available!\n");
        return;
    }

    printf("\n---------------------------------------------------------\n");
    printf("ID\tName\t\tPrice\t\tQuantity\n");
    printf("---------------------------------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\t\t%d\n",
               p[i].id,
               p[i].name,
               p[i].price,
               p[i].quantity);
    }
}

void searchProduct()
{
    int id, found = 0;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("\nProduct Found\n");
            printf("ID       : %d\n", p[i].id);
            printf("Name     : %s\n", p[i].name);
            printf("Price    : %.2f\n", p[i].price);
            printf("Quantity : %d\n", p[i].quantity);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Product Not Found!\n");
}

void updateProduct()
{
    int id, found = 0;

    printf("\nEnter Product ID to Update: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", p[i].name);

            printf("Enter New Price: ");
            scanf("%f", &p[i].price);

            printf("Enter New Quantity: ");
            scanf("%d", &p[i].quantity);

            printf("Product Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Product Not Found!\n");
}

void deleteProduct()
{
    int id, found = 0;

    printf("\nEnter Product ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < n; i++)
    {
        if(p[i].id == id)
        {
            for(int j = i; j < n - 1; j++)
            {
                p[j] = p[j + 1];
            }

            n--;
            found = 1;
            printf("Product Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Product Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                deleteProduct();
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