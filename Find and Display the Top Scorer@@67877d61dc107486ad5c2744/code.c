#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, topIndex = 0;
    scanf("%d", &n);
    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i].roll);
        scanf(" %[^\n]", s[i].name);  // Reads full name including spaces
        scanf("%f", &s[i].marks);

        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Top Scorer:");
    printf(" Roll No: %d", s[topIndex].roll);
    printf(" Name: %s", s[topIndex].name);
    printf(" Marks: %.2f", s[topIndex].marks);

    return 0;
}
