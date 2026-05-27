#include<stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking negative number
    if(n < 0)
    {
        printf("Factorial of negative number is not possible.");
    }
    else
    {
        // Calculating factorial
        for(i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        // Displaying result
        printf("Factorial of %d = %lld", n, factorial);
    }

    return 0;
}