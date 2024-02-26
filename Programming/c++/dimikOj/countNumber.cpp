#include <iostream>
#include <sstream>
#define ll long long
using namespace std;


int main()
{
	int t;
	string s;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        getline(cin, s);
        int count = 0;
        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == ' ' && s[i+1] != ' ')
            {
                count++;
            }
        }
        cout<<count+1<<endl;
    }
}
//    Using stream & bitwise right shift
/* while (t--)
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
} */
