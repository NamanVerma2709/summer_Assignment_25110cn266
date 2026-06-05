#include <stdio.h>
#include <math.h>

int main() {
    int binary, rem, i = 0;
    int decimal = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * pow(2, i);
        binary = binary / 10;
        i++;
    }

    printf("Decimal = %d", decimal);

    return 0;
}