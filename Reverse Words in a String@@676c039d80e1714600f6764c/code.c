#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';  // remove newline if present

    char *wordStart = NULL;
    char *ptr = str;

    while (*ptr) {
        if (!isspace(*ptr) && wordStart == NULL) {
            wordStart = ptr;
        }
        if ((isspace(*ptr) || *(ptr + 1) == '\0') && wordStart != NULL) {
            char *wordEnd = (isspace(*ptr)) ? ptr - 1 : ptr;
            reverseWord(wordStart, wordEnd);
            wordStart = NULL;
        }
        ptr++;
    }

    printf("Result: %s\n", str);

    return 0;
}
