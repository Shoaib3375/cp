#include <bits/stdc++.h>
using namespace std;
// b a d c w d a a
// 0 1 2 3 4 5 6 7
// bad c w daa
int getModIndex(string s)
{
    for (int i = s.length() - 2; i >= 0; i--)
    {
        if (s[i] < s[i + 1])
            return i;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int modIndex = getModIndex(s);
        // cout << modIndex<<endl;
        if (modIndex == -1)
            cout << "no answer" << endl;
        else
        {
            int swapIndex = modIndex + 1;
            for (int i = modIndex + 1; i < s.size(); i++)
            {
                if (s[i] > s[modIndex] && s[i] < s[swapIndex])
                    swapIndex = i;
            }
            swap(s[modIndex], s[swapIndex]);

            sort(s.begin() + modIndex + 1, s.end());
            cout << s << endl;
        }
    }
    return 0;
}