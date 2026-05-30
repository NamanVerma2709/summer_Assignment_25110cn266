#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0, count = 0;
    int original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while(temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}