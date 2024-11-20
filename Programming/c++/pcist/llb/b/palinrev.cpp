#include<stdio.h>
#include<string.h>
int main(){
    char text[20], copy[20];
    gets(text);
    strcpy(copy,text);
    strrev(copy);
    if (strcmp(copy,text)==0)
    {
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
    
}