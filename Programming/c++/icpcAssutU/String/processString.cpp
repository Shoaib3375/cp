#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int main(){
    char s[123];
    cin >> s;
    int i = 0;
    while(s[i] != '\0'){
        cout <<  i<< s[i]<<endl;
        i++;
    }
    cout << i;
    return 0;
}