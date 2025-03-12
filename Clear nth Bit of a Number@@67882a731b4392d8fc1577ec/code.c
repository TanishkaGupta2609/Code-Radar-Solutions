#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int number, n;
    scanf("%d", &number);
    scanf("%d", &n);

    int result = clearNthBit(number, n);
    printf("%d",result);

    return 0;
}
