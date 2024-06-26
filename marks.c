#include <stdio.h>
char calculateGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    int totalMarks[NUM_STUDENTS] = {0};
    float percentage[NUM_STUDENTS];
    char grade[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            totalMarks[i] += marks[i][j];
        }
    
        percentage[i] = totalMarks[i] / (float)NUM_SUBJECTS;
        grade[i] = calculateGrade(percentage[i]);
    }
     printf("\nResults:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Total Marks: %d\n", totalMarks[i]);
        printf("Percentage: %.2f\n", percentage[i]);
        printf("Grade: %c\n", grade[i]);
    }

    return 0;
}