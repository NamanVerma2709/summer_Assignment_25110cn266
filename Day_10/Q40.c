#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 0; i < n; i++) {

        // Increasing characters
        for(j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        // Decreasing characters
        for(j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}