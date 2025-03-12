#include <stdio.h>

int findMSB(int n) {
    int msb = -1;

    while (n > 0) {
        n = n >> 1;
        msb++;
    }

    return msb;
}

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
