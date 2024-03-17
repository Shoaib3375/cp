#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define d double
int a[100010];
int cnt[30];
const ll mx = 10e9 + 123;
char grid[101][101];
int x[123], y[123];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    double maxDistance = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x1 = x[i];
            int y1 = y[i];
            int x2 = x[j];
            int y2 = y[j];

            double dist = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
            if(dist>maxDistance){
                maxDistance = dist;
            }
        }
    }
    cout << fixed << setprecision(10) << maxDistance << endl;
    return 0;
}
