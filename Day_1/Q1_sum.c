#include<stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculating sum of first n natural numbers
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    // Displaying result
    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}