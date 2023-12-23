#include <stdio.h>

int main() {
    int subjectCount = 5;
    float marks[5], totalMarks = 0, percentage;

    for (int i = 0; i < subjectCount; ++i) {
        printf("Enter marks obtained in subject %d (out of 100): ", i + 1);
        scanf("%f", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Marks should be between 0 and 100. Please enter valid marks.\n");
            --i; 
        } else {
            totalMarks += marks[i]; 
        }
    }
    percentage = (totalMarks / (subjectCount * 100)) * 100;
    printf("Aggregate marks obtained: %.2f\n", totalMarks);
    printf("Percentage marks obtained: %.2f%%\n", percentage);

    return 0;
}
