#include <iostream>
#include <sstream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    //    Using stream & bitwise right shift
    while (t--)
    {
        string line;
        getline(cin, line);

        stringstream ss(line);
        int cnt = 0;
        int num;

        while (ss >> num)
        {
            cnt++;
        }

        cout << cnt << endl;
    }
}
