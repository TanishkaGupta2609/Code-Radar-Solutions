#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    // Fix: Space before %c ignores whitespace like newline
    scanf(" %c", &operator);         
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2f", num1 + num2);
            break;
        case '-':
            printf("%.2f", num1 - num2);
            break;
        case '*':
            printf("%.2f", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2f", num1 / num2);
            else
                printf("Division by zero error");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
