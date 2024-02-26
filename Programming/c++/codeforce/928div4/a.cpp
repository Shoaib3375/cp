#include <iostream>
#include <sstream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cntA = 0;
        int cntB = 0;

        string s;
        // getline(cin, s);
        cin >> s;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
            {
                cntA++;
            }
            else
            {
                cntB++;
            }
        }
        if (cntA > cntB)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
}
