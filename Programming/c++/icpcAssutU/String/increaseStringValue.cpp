#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int main(){
    char s[123];
    cin >> s;
    int len = 0;
    while(s[len] != '\0'){
        cout <<  len<< s[len]<<endl;
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        s[i]++;
    }
    
    cout << s;
    return 0;
}