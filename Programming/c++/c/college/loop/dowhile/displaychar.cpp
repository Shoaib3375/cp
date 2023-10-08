#include<stdio.h>
int main()
{
    char ch = 65;
    do{
        printf("%c\n",ch);
        ch++;

    }while((ch>='A')&&(ch<='Z'));
    return 0;
}