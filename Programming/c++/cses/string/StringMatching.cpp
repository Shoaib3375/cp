#include <bits/stdc++.h>
using namespace std;
int solve(string s, string p)
{
    int cnt = 0;
    int l = p.size();
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < p.size(); j++)
        {
            if(s[i]==p[j]){
                cnt++;
            }
        }
        
    }
    return cnt;
    
}
int main()
{
    string s, p;
    cin >> s >> p;
    cout << solve(s, p) << endl;
}