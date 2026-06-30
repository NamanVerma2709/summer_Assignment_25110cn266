#include <stdio.h>

int main() {
    char str[100], temp;
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0')
        len++;

    if (str[len-1] == '\n')
        len--;

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed String = ");
    for(i = 0; i < len; i++)
        printf("%c", str[i]);

    return 0;
}