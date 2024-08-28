#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
int a[mx];
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
 
    int n, q;
    cin >> n >> q;
 
    for ( int i = 0; i < n; i++ ) cin >> a[i];
 
    while ( q-- ) {
        int x;
        cin >> x;
 
        int l = 0, r = n-1;
        int ans = -1;
 
        while ( l <= r ) {
            int mid = ( l + r ) / 2;
 
            if ( a[mid] == x ) ans = mid;
            if ( a[mid] >= x ) {
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
 
 
 
 