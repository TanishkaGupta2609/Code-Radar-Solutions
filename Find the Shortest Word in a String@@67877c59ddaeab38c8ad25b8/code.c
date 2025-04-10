#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    int minLen = INT_MAX, len = 0, start = 0, minStart = 0;

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            if (len == 0) start = i;
            len++;
        } else {
            if (len > 0 && len < minLen) {
                minLen = len;
                minStart = start;
            }
            len = 0;
        }

        if (str[i] == '\0') break;
    }


    for (int i = minStart; i < minStart + minLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
