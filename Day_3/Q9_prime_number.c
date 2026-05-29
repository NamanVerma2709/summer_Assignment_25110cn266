#include<stdio.h>

int main()
{
    int number, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number <= 1)
    {
        flag = 0;
    }

    for(i = 2; i <= number / 2; i++)
    {
        if(number % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("%d is a Prime Number.", number);
    }
    else
    {
        printf("%d is Not a Prime Number.", number);
    }

    return 0;
}