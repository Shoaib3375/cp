#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==1){
        cout << 1<<endl;
        return 0;
    }
    if (n==2 ||n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    int ans = 2;
    while (ans <= n)
    {
        cout << ans <<" ";
        ans += 2;
    }
    ans = 1;
    while (ans<=n)
    {
        cout << ans <<" ";
        ans += 2;
    }
    
}