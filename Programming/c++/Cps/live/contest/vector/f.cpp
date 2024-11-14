#include <iostream>
#include <vector>
using namespace std;

#define NUM 1234

int n, q;
vector<int> v[NUM];

int main()
{
    cin >> n >> q;

    int num, a, b;

    for (int loop = 0; loop < q; loop++)
    {
        cin >> num;

        switch (num)
        {
        case 0:
            cin >> a >> b;
            v[a].push_back(b);
            break;

        case 1:
            cin >> a;
            if (v[a].empty())
            {
                cout << endl;
            }
            else
            {
                cout << v[a][0];
                for (int i = 1; i < v[a].size(); i++)
                {
                    cout << " " << v[a][i];
                }
                cout << endl;
            }
            break;

        case 2:
            cin >> a;
            v[a].clear();
            break;
        }
    }

    return 0;
}
