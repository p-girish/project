#include <stdio.h>

struct Student {
        char name[50];
        int rollNumber;
        int marks[5];
        int totalMarks;
        float percentage;
};

int main() {
        int numStudents;

        printf("Enter the number of students: ");
        scanf("%d", &numStudents);

        struct Student students[numStudents];

        // Input student data
        for (int i = 0; i < numStudents; i++) {
                printf("\nStudent %d:\n", i + 1);
                printf("Enter name: ");
                scanf("%s", students[i].name);

                printf("Enter roll number: ");
                scanf("%d", &students[i].rollNumber);

                printf("Enter marks for 5 subjects:\n");
                students[i].totalMarks = 0;
                for (int j = 0; j < 5; j++) {
                        printf("Subject %d: ", j + 1);
                        scanf("%d", &students[i].marks[j]);
                        students[i].totalMarks += students[i].marks[j];
                }

                students[i].percentage = (float) students[i].totalMarks / 5;
        }
        // Display student data
        printf("\n\nStudent Data:\n");
        for (int i = 0; i < numStudents; i++) {
                printf("\nStudent %d:\n", i + 1);
                printf("Name: %s\n", students[i].name);
                printf("Roll Number: %d\n", students[i].rollNumber);
                printf("Total Marks: %d\n", students[i].totalMarks);
                printf("Percentage: %.2f%%\n", students[i].percentage);
        }

        return 0;
}
