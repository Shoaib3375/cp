#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    char s[123];
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        int len = 0;
        while(s[len] != '\0'){
            len++;
        }
        if (len>10)
        {
            cout << s[0]<<len-2<<s[len-1]<<endl;
        }else{
            cout << s<<endl;
        }
    }
}