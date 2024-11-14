#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
       if(isupper(s[i])){
        cnt++;
       }
    }
    cout << cnt+1;
}
/* 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        // Check if the 6th bit is unset (indicating an uppercase letter)
        if ((s[i] & 32) == 0 && isalpha(s[i])) {
            cnt++;
        }
    }
    cout << cnt + 1;
}
 */