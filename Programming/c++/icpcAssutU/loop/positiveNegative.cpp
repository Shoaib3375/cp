#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int cnt;
    cin >> cnt;
    int positive = 0,neg = 0,even = 0,odd = 0;
    while (cnt--)
    {
        int n;
        cin >> n;
        if(n%2 ==0) even++;
        else odd++;
        if(n>0) positive++;
        else if(n<0) neg++;
    }
    cout << "Even: "<<even<<endl;
    cout << "Odd: "<<odd<<endl;
    cout << "Positive: "<<positive<<endl;
    cout << "Negative: "<<neg<<endl;
    
}