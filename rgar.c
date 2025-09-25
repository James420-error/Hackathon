#include <stdio.h>
#include <stdlib.h>

// Function to validate marks and return the grade
char getGrade(float marks) {
    if (marks < 0 || marks > 100) {
        return 'I'; // 'I' for Invalid
    } else if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function to handle single subject grade calculation
void calculateSingleSubject() {
    float marks;
    char grade;

    printf("Enter marks for the subject (0-100): ");
    if (scanf("%f", &marks) != 1) {
        printf("Invalid input. Please enter a number.\n");
        while (getchar() != '\n'); // Clear input buffer
        return;
    }

    grade = getGrade(marks);
    if (grade == 'I') {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
    } else {
        printf("The grade for %.2f marks is: %c\n", marks, grade);
    }
}

// Function to handle multiple subject grade calculation
void calculateMultipleSubjects() {
    int numSubjects, i;
    float totalMarks = 0.0, marks;
    char grade;

    printf("Enter the number of subjects: ");
    if (scanf("%d", &numSubjects) != 1 || numSubjects <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        while (getchar() != '\n');
        return;
    }

    for (i = 1; i <= numSubjects; i++) {
        printf("Enter marks for subject %d (0-100): ", i);
        if (scanf("%f", &marks) != 1) {
            printf("Invalid input. Please enter a number. Skipping this subject.\n");
            while (getchar() != '\n');
            continue;
        }

        if (marks < 0 || marks > 100) {
            printf("Invalid marks. Skipping this subject.\n");
            continue;
        }

        totalMarks += marks;
    }

    float percentage = (totalMarks / (numSubjects * 100)) * 100;
    grade = getGrade(percentage);

    printf("\n--- Results ---\n");
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Overall Grade: %c\n", grade);
}

// Main function to display the menu
int main() {
    int choice;

    while (1) {
        printf("\n--- Grade Calculator Menu ---\n");
        printf("1. Calculate grade for a single subject\n");
        printf("2. Calculate overall grade for multiple subjects\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        
        // Consume the newline character left in the input buffer
        while (getchar() != '\n');

        switch (choice) {
            case 1:
                calculateSingleSubject();
                break;
            case 2:
                calculateMultipleSubjects();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
