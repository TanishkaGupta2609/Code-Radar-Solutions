#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    float totalMarks = 0;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        totalMarks += students[i].marks;
    }
    float average = totalMarks / n;
    printf("Average Marks: %.2f\n", average);

    return 0;
}