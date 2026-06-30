#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++)
        count1[(int)str1[i]]++;

    for(i = 0; str2[i] != '\0'; i++)
        count2[(int)str2[i]]++;

    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            printf("Strings are Not Anagrams.");
            return 0;
        }
    }

    printf("Strings are Anagrams.");

    return 0;
}