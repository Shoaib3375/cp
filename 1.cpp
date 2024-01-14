#include <bits/stdc++.h>
using namespace std;
const int mx = 100013;
int a[mx];
int b[mx];
int freq[mx];
#define ll long long
// int main(){
//   int a[3][4], cnt =1;
//   for(int i = 0; i < 3; i++){
//     for(int j = 0; j < 4; j++){
//       a[i][j] = cnt;
//       cnt++;
//     }
//   }

//   for(int i = 0; i < 3; i++){
//     for(int j = 0; j < 4; j++){
//       cout<<"(" <<i << " "<< j << ") "<< a[i][j]<< endl;
//     }
//     cout << endl;
//   }
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int ans = ar[0];
    for(int i = 1; i < n; i++) {
        ans = max(ans, ar[i]);
    }
    cout << ans << endl;
    return 0;
}