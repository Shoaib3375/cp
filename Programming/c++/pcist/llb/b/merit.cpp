#include <stdio.h>

/* Declaration of structure */
struct student
{
    char name[30];
    int roll;
    float marks;
};

int main()
{
    /* Declaration of array of structure */
    struct student s[20], temp;
    int i, j, n;

    printf("Enter the number of students:\n");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++)
    {
        printf("Enter name, roll, and marks of student %d:\n", i + 1);
        scanf("%s%d%f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Sorting students by marks in descending order (merit position)
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].marks < s[j].marks) // Change comparison for descending order
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    // Output sorted student details
    printf("\nSorted records by merit position are:\n");
    for (i = 0; i < n; i++)
    {
        printf("Rank %d\n", i + 1); // Display rank
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}
