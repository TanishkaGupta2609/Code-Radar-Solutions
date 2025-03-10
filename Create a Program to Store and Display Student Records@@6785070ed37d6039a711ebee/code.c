#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student students[n];
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (i = 0; i < n; i++) {
        printf("Roll Number: %d,", students[i].rollNumber);
        printf(" Name: %s,", students[i].name);
        printf(" Marks: %.2f \n", students[i].marks);
    }

    return 0;
}