#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // For all ASCII characters

    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // First pass: count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Second pass: find first non-repeated
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("-");
    return 0;
}
