#include<stdio.h>

int main() {
    int num, reversed = 0,ans =0;
    printf("Enter number: ");
    scanf("%d",&num);

    while (num != 0) {
        int digit = num % 10;   
        reversed = reversed * 10 + digit;
        ans += digit;
        num = num / 10;
    }
    
    printf("Reversed Number: %d\n",reversed);
    printf("Total sum of Digit: %d\n",ans);
    return 0;
}
