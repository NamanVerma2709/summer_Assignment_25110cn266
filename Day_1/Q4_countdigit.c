#include<stdio.h>

int main()
{
    int number;
    int count = 0;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Counting digits
    while(number != 0)
    {
        number = number / 10;
        count++;
    }

    // Display result
    printf("Total digits = %d", count);

    return 0;
}