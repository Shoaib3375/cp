#include<stdio.h>

int main() {
    int num, reversed = 0,ans =0;
    printf("Enter number: ");
    scanf("%d",&num);
    // num = 12  // digit = 1      // rev = 432 * 10 + 1 = 4321
    // ans = 7 + 2 = 9 + 1 = 10
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
