#include <stdio.h>

int prime(int n) {
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(prime(num))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}