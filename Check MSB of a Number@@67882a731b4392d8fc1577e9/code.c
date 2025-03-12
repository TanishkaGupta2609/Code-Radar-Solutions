#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num & (1u << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}