#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);
}

int main() {
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter bit position to set (0-indexed): ");
    scanf("%d", &n);

    int result = setNthBit(num, n);
    printf("%d\n", n, result);
    return 0;
}
