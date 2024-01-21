#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n>> m;
    for (int j = 0; j < m; j++) cout << "#";
    cout<<endl;
    for (int i = 0; i < n-1; i++)
    {
        cout <<"#";
        for (int j = 0; j < n-1; j++) cout<<".";
        cout <<"#";
        cout<<endl;
    }
    for (int j = 0; j < m; j++) cout << "#";
    cout<<endl;
    cout<<endl;

}