#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n------ Marksheet ------\n");
    printf("Name       : %s\n", name);
    printf("Subject 1  : %d\n", m1);
    printf("Subject 2  : %d\n", m2);
    printf("Subject 3  : %d\n", m3);
    printf("Total      : %d\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 75)
        printf("Grade : A\n");
    else if (percentage >= 60)
        printf("Grade : B\n");
    else if (percentage >= 40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}