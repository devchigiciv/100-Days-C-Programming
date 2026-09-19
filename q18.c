#include <stdio.h>

int main() {
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
        printf("Grade A\n");
    else if (percentage >= 80 && percentage < 90)
        printf("Grade B\n");
    else if (percentage >= 70 && percentage < 80)
        printf("Grade C\n");
    else
        printf("Grade below C\n");

    return 0;
}