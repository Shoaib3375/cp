#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int asum = 0, bsum = 0, totalsum = 0;
    printf("Enter First matrix elements");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
            asum += a[i][j];
        }
    }
    printf("Enter second Matrix element : ");
    
}