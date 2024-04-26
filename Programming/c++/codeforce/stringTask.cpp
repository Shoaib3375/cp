// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define d double
// main()
// {
//     string s, t;
//     cin >> s;
//     transform(s.begin(), s.end(), s.begin(), ::tolower);

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
//         {
//             continue;
//         }
//         else
//         {
//             t += ".";
//             t += s[i];
//         }
//     }
//     cout << t << endl;
// }
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isVowel(char c)
{
    return ((c == 'a') || (c == 'o') || (c == 'i') || (c == 'e') || (c == 'u') || (c == 'y'));
}

int main()
{
    optimize();
    string s, ans;
    cin >> s;
    for (auto u : s)
    {
        char c = tolower(u);
        if (!isVowel(c))
        {
            ans += '.';
            ans += c;
        }
    }
    cout << ans<<endl;
}