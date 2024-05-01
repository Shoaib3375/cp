#include <stdio.h>

#define MAX_STUDENTS 50

// Define structure for student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Input student information
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Sort students according to merit position (descending order of marks)
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the students
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display sorted student information

    printf("Merit Position\tName\t\tRoll Number\tMarks\n");

    for (int i = 0; i < numStudents; i++) {
        printf("%d\t\t%s\t\t%d\t\t%.2f\n", i + 1, students[i].name, students[i].rollNumber, students[i].marks);
    }

    return 0;
}
