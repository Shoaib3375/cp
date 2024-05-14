#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    int n;
    cin >> n;
    int years = n / 365;
    n = n - (years * 365);
    int months = n / 30;
    int days = n % 30;
    cout << years<< " years"<<endl;
    cout << months<< " months"<<endl;
    cout << days<< " days"<<endl;
}