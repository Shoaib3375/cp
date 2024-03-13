#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const int mx = 10e5 + 123;
char s[mx];
int main()
{
    int n;
    cin>>n;
    int one = 0,two = 1;
    if(n==1){
        cout<<one<<endl;
        return 0;
    }else if (n==2)
    {
        cout << one <<" "<<two<<endl;
        return 0;
    }else{
        cout << one <<" "<<two<<" ";

        for (int i = 2; i <n; i++)
        {
            int res = one + two;
            cout << res<<" ";
            one = two;
            two = res;
        }
        
    }
    
}
