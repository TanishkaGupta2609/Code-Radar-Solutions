#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    // Set the nth bit to 1 using bitwise OR
    num = num | (1 << n);

    printf("%d\n", num);

    return 0;
}