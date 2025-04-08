#include <stdio.h>

int main() {
    char s[1001];
    int freq[26] = {0};
    scanf("%[^\n]", s);  // To read spaces too

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }
    }

    int max_freq = 0;
    char result_char = 'z' + 1;  // Something higher than any valid char

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            result_char = 'a' + i;
        } else if (freq[i] == max_freq && ('a' + i) < result_char) {
            result_char = 'a' + i;
        }
    }

    printf("%c\n", result_char);
    return 0;
}
