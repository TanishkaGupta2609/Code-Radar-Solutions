#include <stdio.h>

int main() {
    char operator;
    float num1, num2;
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
            printf("error");
    }
    else {
        printf("Invalid operator");
    }

    return 0;
}
