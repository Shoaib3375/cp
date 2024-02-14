#include <stdio.h>
#include <string.h>

void swap(char str1[], char str2[])
{
    char temp[50];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}


void bubbleSort(char arr[][50], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    char names[5][50];

    printf("Enter 5 names:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j != '\0'; j++)
    //     {
    //         printf("Name %d: ", i+1);
    //         gets(names[i][j]);

    //     }
        
    // }
    
    bubbleSort(names, 5);
    printf("\nSorted Names:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
