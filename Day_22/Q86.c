#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] == ' ')
            words++;
        i++;
    }

    printf("Total Words = %d", words);

    return 0;
}