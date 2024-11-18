#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10];
    int b = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if(b>arr[i]){
            b = arr[i];
        }
    }
    printf("%d ",b);
    
    
    
}