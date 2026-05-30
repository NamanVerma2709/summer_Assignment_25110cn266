#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, digit, sum, count;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for(i = start; i <= end; i++) {
        temp = i;
        count = 0;
        sum = 0;

        while(temp > 0) {
            count++;
            temp = temp / 10;
        }

        temp = i;

        while(temp > 0) {
            digit = temp % 10;
            sum = sum + pow(digit, count);
            temp = temp / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}