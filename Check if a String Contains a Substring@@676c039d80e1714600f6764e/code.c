#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], sub[100];

    fgets(str, sizeof(str), stdin);

    fgets(sub, sizeof(sub), stdin);

    // Remove newline characters if present
    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    if (strstr(str, sub) != NULL) {
        printf("%s", sub);
    } else {
        printf("%s", sub);
    }

    return 0;
}
