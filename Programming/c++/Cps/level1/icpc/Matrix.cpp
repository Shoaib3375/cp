#include<bits/stdc++.h>
using namespace std;
const int mx = 123;
int a[mx][mx];
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;
    for (int  i = 0; i < n; i++)
    {
        primaryDiagonal += a[i][i];
    }
    for (int i = 0,j = n-1; i < n; i++,j--)
    {
        secondaryDiagonal += a[i][j];
    }
    int difference = primaryDiagonal - secondaryDiagonal;
    if(difference < 0) difference *= -1;
    cout << difference;
}