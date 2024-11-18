#include<stdio.h>
#include<string.h>
int main(){
    int i,size,compare;
    char s[10];
    gets(s);
    size = strlen(s);
    char a[10];
    for (int i = 0; i <size; i++)
    {
        a[i] = s[size -i -1];
    }
    a[size] = '\0';
    compare = strcmp(s,a);
    if(compare == 0){
        printf("palindrome");
    }else{
        printf("Not palindrome");
    }
    
}