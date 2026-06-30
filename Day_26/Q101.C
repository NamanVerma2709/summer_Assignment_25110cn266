#include <stdio.h>

int main() {
    int secret = 25, guess;

    printf("Guess the number (1-100): ");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Congratulations! Correct Guess.");
    else if (guess < secret)
        printf("Too Low!");
    else
        printf("Too High!");

    return 0;
}