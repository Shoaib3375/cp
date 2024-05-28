#include<bits/stdc++.h>
using namespace std;
int solve(){
    set<int> s;
    int a,b,c,d;
    cin>> a>> b>> c>>d;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout << 4-s.size()<<endl;

}
int main(){
    // int arr[4];
    // int cnt = 0;
    // for (int i = 0; i < 4; i++)
    // {
    //     int a;
    //     cin>> a;
    //     arr[i] = a;
    // }
    // sort(arr,arr+4);
    // for (int i = 0; i < 4; i++)
    // {
    //     if(arr[i]==arr[i+1]){
    //         cnt++;
    //     }
    // }

    solve();
    // cout << cnt<<endl;
}