#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("===== QUIZ =====\n");

    printf("\nQ1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;

    printf("\nQ2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;

    printf("\nQ3. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 14\n");
    scanf("%d", &ans);
    if(ans == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}