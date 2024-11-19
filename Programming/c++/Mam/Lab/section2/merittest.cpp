#include <stdio.h>
typedef struct
{
    char fn[15], ln[15], bg[4];
    int roll, age;
    float cgpa;
} student;
int main()
{
    student s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter your first name:\n");
        scanf("%s", s[i].fn);
        printf("Enter your last name: \n");
        scanf("%s", s[i].ln);
        printf("Enter your roll: \n");
        scanf("%d", &s[i].roll);
        printf("Enter your HSC GPA:\n");
        scanf("%f",&s[i].cgpa);
        
    }
 
}
