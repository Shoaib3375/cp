#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st;
    string s;
    getline(cin, s);
    for (auto i : s)
    {
        if (i ==' ')
            continue;
        st.insert(tolower(i));
    }
    cout << st.size()<<endl;
}