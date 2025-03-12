#include <stdio.h>

int toggleNthBit(int num, int n) {
    return num ^ (1 << n);
}

int main() {
    int number, n;
    scanf("%d", &number);
    scanf("%d", &n);

    int toggled = toggleNthBit(number, n);
    printf("%d",toggled);

    return 0;
}
