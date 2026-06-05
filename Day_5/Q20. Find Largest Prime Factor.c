#include <stdio.h>

int main() {
    int num, i, j, largest = 0, prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) {

        if(num % i == 0) {

            prime = 1;

            for(j = 2; j < i; j++) {
                if(i % j == 0) {
                    prime = 0;
                    break;
                }
            }

            if(prime == 1) {
                largest = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}