#include<stdio.h>
int main()
{
    char alphabet = 'a';
    do
    printf("%c\t",alphabet++);
    while(alphabet<='z');
    return 0;
}