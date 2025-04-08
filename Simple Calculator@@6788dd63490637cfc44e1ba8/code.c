#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    // Space before %c skips whitespace (like newline)
    scanf(" %c", &operator);
    scanf("%f %f", &num1, &num2);

    if (operator == '+') {
        printf("%.2f", num1 + num2);
    }
    else if (operator == '-') {
        printf("%.2f", num1 - num2);
    }
    else if (operator == '*') {
        printf("%.2f", num1 * num2);
    }
    else if (operator == '/') {
        if (num2 != 0)
            printf("%.2f", num1 / num2);
        else
            printf("Division by zero error");
    }
    else {
        printf("Invalid operator");
    }

    return 0;
}
