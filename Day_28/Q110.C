#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

struct Account a;
int created = 0;

void createAccount()
{
    printf("\nEnter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    created = 1;

    printf("\nAccount Created Successfully!\n");
}

void deposit()
{
    float amount;

    if(created == 0)
    {
        printf("\nCreate Account First!\n");
        return;
    }

    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    a.balance += amount;

    printf("Amount Deposited Successfully!\n");
}

void withdraw()
{
    float amount;

    if(created == 0)
    {
        printf("\nCreate Account First!\n");
        return;
    }

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);

    if(amount > a.balance)
    {
        printf("Insufficient Balance!\n");
    }
    else
    {
        a.balance -= amount;
        printf("Amount Withdrawn Successfully!\n");
    }
}

void checkBalance()
{
    if(created == 0)
    {
        printf("\nCreate Account First!\n");
        return;
    }

    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", a.accNo);
    printf("Account Holder : %s\n", a.name);
    printf("Current Balance: %.2f\n", a.balance);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== BANK ACCOUNT MANAGEMENT =====");
        printf("\n1. Create Account");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Check Balance");
        printf("\n5. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                checkBalance();
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