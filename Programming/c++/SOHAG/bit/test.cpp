// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 11;
//     int a = (1<<30)-1;
//     int b = (1<<3);
//     int ans = n&(a-b);
//     cout <<ans<< endl;
//     cout << (1<<5);
     
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
cout<<n<<" ";
while(n!=1){
    if(n%2==0){
        n=n/2;
        cout<<n<<" ";
    }
    else{
        n=(n*3)+1;
        cout<<n<<" ";
    }
}
cout<<endl;

return 0;
}