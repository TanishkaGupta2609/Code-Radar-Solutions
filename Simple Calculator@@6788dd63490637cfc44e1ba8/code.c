#include <stdio.h>

int main() {
    char operator;
    float num1, num2;

    // Space before %c skips whitespace (like newline)
    scanf("%f %f", &num1, &num2);
    scanf(" %c", &operator);

    if (operator == '+') {
        printf("%d", num1 + num2);
    }
    else if (operator == '-') {
        printf("%d", num1 - num2);
    }
    else if (operator == '*') {
        printf("%d", num1 * num2);
    }
    else if (operator == '/') {
        if (num2 != 0)
            printf("%d", num1 / num2);
        else
            printf("Division by zero error");
    }
    else {
        printf("Invalid operator");
    }

    return 0;
}
