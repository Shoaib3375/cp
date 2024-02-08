// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define d double
// int a[100010];
// int main(){
//     int x = 0;
//     for (int i = 1; i <=5; i++)
//     {
//         for (int j = 1; j <=5; j++)
//         {
//             cin>>x;
//             if(x==1){
//                 cout<<abs(i-3)+abs(j-3)<<endl;
//             }
//         }
        
//     }
    
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{
    char s[123];
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        int len = 0;
        while(s[len] != '\0'){
            len++;
        }
        if (len>10)
        {
            cout << s[0]<<len-2<<s[len-1]<<endl;
        }else{
            cout << s<<endl;
        }
    }
}