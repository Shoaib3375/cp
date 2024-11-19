#include <stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int arr[10];
    for (int i = 1; i <=10; i++)
    {
        scanf("%d", &arr[i]);
    }
    bool flag = false;
    int search, position;
    scanf("%d",&search);
    for (int i = 1; i <=10; i++)
    {
        if(search==arr[i]){
            position = i;
            flag = true;
        }
    }
    if (flag)
    {
        printf("The element found in : %dth position",position);
    }else{
        printf("Not found in array");
    }
}