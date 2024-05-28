#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    set<char> st;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    if(st.size()==26) cout << "YES"<<endl;
    else  cout << "NO"<<endl;
    return 0;
}