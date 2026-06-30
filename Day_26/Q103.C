#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount <= balance) {
                balance -= amount;
                printf("Updated Balance = %.2f", balance);
            } else {
                printf("Insufficient Balance!");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}