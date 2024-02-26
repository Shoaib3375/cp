#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    cin >> X;

    string result;
    if (0 <= X && X <= 1599)
    {
        result = "Pupil";
    }
    else if (1600 <= X && X <= 1699)
    {
        result = "Specialist";
    }
    else if (1700 <= X && X <= 1799)
    {
        result = "Expert";
    }
    else if (1800 <= X && X <= 1999)
    {
        result = "Candidate Master";
    }
    else if (2000 <= X && X <= 2199)
    {
        result = "Master";
    }
    cout << result <<endl;
    return 0;
}
