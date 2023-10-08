#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    
    if(num1 == num2){
    printf("they are equal");
    }
    if(num1 > num2){
        printf("%d is grater then %d",num1,num2);
    }
    if(num1 < num2){
        printf("%d is less then %d",num1,num2);
    }
}