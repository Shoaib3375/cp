#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int main()
{
    int n;
    cin >> n;
    if (n>0 && n<10)
    {
        cout << "Palindrome";
    }else if(n>=10 && n<100){
        cout << "Palindrome";
    }else{
        cout << "Not palindrome";
    }
    
}