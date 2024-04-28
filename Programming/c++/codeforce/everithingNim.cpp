#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> piles(n);
        for (int i = 0; i < n; i++)
        {
            cin >> piles[i];
        }
        sort(piles.begin(), piles.end());
        long long totalStones = 0;
        for (auto &&stone : piles)
        {
            totalStones += stone;
        }
        if(totalStones %n == 0){
            cout <<"Alice"<<endl;
        }else{
            cout <<"Bob"<<endl;
        }
    }

    return 0;
}