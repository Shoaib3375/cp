// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// const ll Mod = 998244353;
// const ll INF = 0x3f3f3f3f;

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t, n;
//     cin >> t;
//     while(t--){
//         cin >> n;
//         if (n%2 == 0)
//         {
//             cout<<"Even"<<endl;
//         }else{
//             cout<<"Odd"<<endl;;
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int count = 0;
//     for (int i = 1000; i >=1 ; i--)
//     {
//         cout << i << "\t";
//         count++;
//         if (count % 5 == 0)
//         {
//             cout<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T, l;
//     char c[101];
//     cin>>T;
//     while(T--)
//     {
//         cin>>c;
//         l = c[strlen(c)-1];
//         if(l % 2 == 0)
//         {
//             cout<<"even"<<endl;
//         }
//         else
//         {
//             cout<<"odd"<<endl;
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t, n, j, i;
    cin >> t;
    for (int i = 1; i <= n; i++)
    {
        cin >> n;
        cout << i;

        for (int j = 1;j <=n ; j++)
        {
            if (n%i == 0)
            {
                cout << j;
            }
        }
        cout << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>  // includes necessary library
using namespace std;
#define ll long long int
int main()
{
    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        int num;
        cin>>num;
        cout<<"Case "<<t<<": ";  // printing Case numbers
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<num<<endl;   // the last divisor will be the number itself
    }
    return 0;
}