#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>> n>> m;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if(i%2==1) printf("#");
            else if(j==1 && i%4==0) printf("#");
            else if(j==m && (i+2)%4==0) printf("#");
            else printf(".");
        }
        cout << endl;
    }
    
}