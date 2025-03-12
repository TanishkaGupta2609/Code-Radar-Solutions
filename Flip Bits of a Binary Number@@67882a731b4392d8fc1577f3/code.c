#include <stdio.h>

void printBinary(unsigned int num) {
    int started = 0;
    for (int i = sizeof(unsigned int) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit) started = 1;
        if (started)
            return bit;
    }
    if (!started)
        return 0;
}

int main() {
    unsigned int num;
   
    scanf("%u", &num);

    
    printBinary(num);

    unsigned int flipped = ~num;

    printBinary(flipped);

    printf("%d", flipped);

    return 0;
}
