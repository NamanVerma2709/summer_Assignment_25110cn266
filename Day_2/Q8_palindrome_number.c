#include<stdio.h>

int main()
{
    int number, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while(number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if(original == reverse)
    {
        printf("The number is a Palindrome.");
    }
    else
    {
        printf("The number is not a Palindrome.");
    }

    return 0;
}