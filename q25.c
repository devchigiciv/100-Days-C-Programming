#include <stdio.h>

int main() {
    float a, b, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;

        case '%':
            if ((int)b != 0)
                printf("Result = %d\n", (int)a % (int)b);
            else
                printf("Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}