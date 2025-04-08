#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Read operator with leading space to ignore leftover newline
    scanf(" %c", &operator);
    // Read two float numbers
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f", result);
            } else {
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
