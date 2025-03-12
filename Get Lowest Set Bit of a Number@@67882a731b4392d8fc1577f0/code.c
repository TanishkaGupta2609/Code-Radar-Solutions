#include <stdio.h>

int getLowestSetBit(int num) {
    if (num == 0)
        return -1;  // No set bits in 0

    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    return position;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int pos = getLowestSetBit(number);
    if (pos != -1)
        printf("%d", pos);
    else
        printf("No set bits found.\n");

    return 0;
}
