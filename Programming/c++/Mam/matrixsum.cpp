#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 3;
    int a[n][n], b[n][n];
    int asum = 0, bsum = 0, sum = 0;
    printf("Enter first matrix a value");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            asum += a[i][j];
        }
        
    }
    printf("Enter second matrix a value");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
            bsum += b[i][j];
        }
        
    }
    sum = asum + bsum;
    
    cout << sum << endl;
}