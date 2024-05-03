#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int x = n / 4;
    // for (int i = 0; i < x; i++)
    // {
    //     cout << "abcd";
    // }
    // char c = 'a';
    // for (int i = 0; i < n % 4; i++)
    // {
    //     cout << c++;
    // }
    int n;
    cin >>n;
    char ch = 'a';
    while (n--)
    {
        cout << ch;
        ch++;
        if(ch=='e') ch= 'a';
    }
    
}