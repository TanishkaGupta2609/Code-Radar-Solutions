#include <stdio.h>

int countTrailingZeros(unsigned int n) {
    int count = 0;

    // Special case for zero input
    if (n == 0) return sizeof(int) * 8;

    while ((n & 1) == 0) {
        count++;
        n >>= 1;
    }

    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    int result = countTrailingZeros(num);
    printf(" %u: %d\n", num, result);

    return 0;
}
