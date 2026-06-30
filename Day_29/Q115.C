#include <stdio.h>
#include <string.h>

char str1[100], str2[100], temp[100];

void inputString()
{
    printf("\nEnter First String: ");
    scanf(" %[^\n]", str1);

    printf("Enter Second String: ");
    scanf(" %[^\n]", str2);
}

void stringLength()
{
    printf("\nLength of First String = %lu", strlen(str1));
    printf("\nLength of Second String = %lu\n", strlen(str2));
}

void stringCopy()
{
    strcpy(temp, str1);
    printf("\nCopied String = %s\n", temp);
}

void stringConcatenate()
{
    strcpy(temp, str1);
    strcat(temp, str2);
    printf("\nConcatenated String = %s\n", temp);
}

void stringCompare()
{
    if(strcmp(str1, str2) == 0)
        printf("\nBoth Strings are Equal.\n");
    else
        printf("\nStrings are Not Equal.\n");
}

void stringReverse()
{
    strcpy(temp, str1);

    int len = strlen(temp);

    for(int i = 0; i < len / 2; i++)
    {
        char ch = temp[i];
        temp[i] = temp[len - i - 1];
        temp[len - i - 1] = ch;
    }

    printf("\nReverse String = %s\n", temp);
}

void palindrome()
{
    strcpy(temp, str1);

    int len = strlen(temp);

    for(int i = 0; i < len / 2; i++)
    {
        char ch = temp[i];
        temp[i] = temp[len - i - 1];
        temp[len - i - 1] = ch;
    }

    if(strcmp(str1, temp) == 0)
        printf("\nPalindrome String.\n");
    else
        printf("\nNot a Palindrome String.\n");
}

int main()
{
    int choice;

    inputString();

    do
    {
        printf("\n===== STRING OPERATIONS =====");
        printf("\n1. String Length");
        printf("\n2. String Copy");
        printf("\n3. String Concatenate");
        printf("\n4. String Compare");
        printf("\n5. String Reverse");
        printf("\n6. Palindrome Check");
        printf("\n7. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                stringLength();
                break;

            case 2:
                stringCopy();
                break;

            case 3:
                stringConcatenate();
                break;

            case 4:
                stringCompare();
                break;

            case 5:
                stringReverse();
                break;

            case 6:
                palindrome();
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