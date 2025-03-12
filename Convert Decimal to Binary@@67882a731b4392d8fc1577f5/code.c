#include <stdio.h>

void decimalToBinary(int num) {
    int started = 0;
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit == 1)
            started = 1;

        if (started)
            printf("%d", bit);
    }

    if (!started) 
        printf("0");
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);

    return 0;
}
