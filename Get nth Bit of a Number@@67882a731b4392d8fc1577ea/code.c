#include <stdio.h>

int getNthBit(int number, int n) {
    return (number >> n) & 1;
}

int main() {
    int number, n;
    scanf("%d", &number);
    
    scanf("%d", &n);

    int bit = getNthBit(number, n);
    printf("%d", bit);

    return 0;
}
