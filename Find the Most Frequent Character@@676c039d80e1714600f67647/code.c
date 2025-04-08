#include <stdio.h>

int main() {
    char s[1001];
    int freq[26] = {0};
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    int max_freq = 0;
    char result_char;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            result_char = 'a' + i;
        }
    }

    printf("%c\n", result_char);
    return 0;
}
