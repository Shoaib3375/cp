// #include<stdio.h>
// int main(){
// int n,r=0,o,x;
// scanf("%d",&n);
// o=n;
// while(n!=0){
// x=n%10;
// r=r*10+x;
// n/=10;
// }
// if(o==r){
//     printf("Pallindrome");
// }
// else
//     printf("Not a pallindrome");
// return 0;
// }

// #define ll long long
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         priority_queue<ll> pq;
//         int n;
//         cin>> n;
//         for (int i = 0; i < n; i++)
//         {
//             int a;
//             cin >> a;
//             pq.push(-a);
//         }
//         ll ans = 0;
//         while (pq.size()>1)
//         {
//             ll a1 = -pq.top();
//             pq.pop();
//             ll a2 = -pq.top();
//             pq.pop();
//             pq.push(-(a1+a2));
//             ans += (a1+a2);
//         }
//         cout << ans<<endl;

//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mx = 1e5 + 123;
    int arr[mx];

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Using the standard library sort function
    sort(arr, arr + n);
    
    // Output the sorted array to verify the result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
