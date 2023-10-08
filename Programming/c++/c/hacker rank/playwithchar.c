#include<stdio.h>
int main()
{
    
    char ch;
    char s[MAX_LEN];
    char sen[30];
    scanf("%c", &ch);
    printf("%c", ch);
    scanf("%[^\n]%*c", s);
}