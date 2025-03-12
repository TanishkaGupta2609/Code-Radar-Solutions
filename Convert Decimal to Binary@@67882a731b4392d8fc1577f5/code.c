#include <stdio.h>

void decimalToBinary(int num) {
    int started = 0; // Flag to skip leading zeros
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit == 1)
            started = 1;

        if (started)
            printf("%d", bit);
    }

    if (!started) // If number was 0
        printf("0");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    decimalToBinary(num);

    return 0;
}
