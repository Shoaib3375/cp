#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    gets(str);
    char str2[20];
    gets(str2);
    int n = strcmp(str,str2);
    if(n==0){
        printf("the value is equal");
    }else if(n>0){
        printf("%s is greater than %s",str,str2);
    }else if(n<0){
        printf("%s is lower than %s",str,str2);
    }
}