#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    while (i <= n) {
        float attendance, assignment, classTest, midterm, termFinal, totalMarks, percentage;
        char grade;

        // Input marks for each category
        printf("\nEnter marks for student %d:\n", i);
        printf("Attendance (out of 5): ");
        scanf("%f", &attendance);

        printf("Assignment (out of 10): ");
        scanf("%f", &assignment);

        printf("Class Test (out of 15): ");
        scanf("%f", &classTest);

        printf("Midterm (out of 50): ");
        scanf("%f", &midterm);

        printf("Term Final (out of 100): ");
        scanf("%f", &termFinal);

        // Calculate total marks and percentage
        totalMarks = attendance + assignment + classTest + midterm + termFinal;
        percentage = (totalMarks / 180) * 100;

        // Determine the grade based on the percentage
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 86) {
            grade = 'A-';
        } else if (percentage >= 82) {
            grade = 'B+';
        } else if (percentage >= 78) {
            grade = 'B';
        } else if (percentage >= 74) {
            grade = 'B-';
        } else if (percentage >= 70) {
            grade = 'C+';
        } else if (percentage >= 66) {
            grade = 'C';
        } else if (percentage >= 62) {
            grade = 'C-';
        } else if (percentage >= 58) {
            grade = 'D+';
        } else if (percentage >= 55) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Output the grade for the student
        printf("\nGrade for student %d: %c\n", i, grade);

        i++; // Move to the next student
    }

    return 0;
}
