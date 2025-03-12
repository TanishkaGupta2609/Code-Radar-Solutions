#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
    }
    return count;
}

int main() {
    unsigned int number;

    scanf("%u", &number);

    int leadingZeros = countLeadingZeros(number);
    printf("%d", leadingZeros);

    return 0;
}
