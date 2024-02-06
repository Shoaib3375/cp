#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    string s;
    cin >> s;
    if (s == "Like")
    {
        cout << "(y)" << endl;
    }
    else if (s == "Love")
    {
        cout << "<3" << endl;
    }
    else if (s == "Care")
    {
        cout << "^_<3_^" << endl;
    }
    else if (s == "Haha")
    {
        cout << ":p" << endl;
    }
    else if (s == "Wow")
    {
        cout << ":O" << endl;
    }
    else if (s == "Sad")
    {
        cout << ":'(" << endl;
    }
    else if (s == "Angry")
    {
        cout << ">_<" << endl;
    }else{
        return 0;
    }
    return 0;
}