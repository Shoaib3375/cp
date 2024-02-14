#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i = 0;i<n;i++) {
        int x;
        scanf("%d", &x);
        arr[x]++;
    }


    int search;
    cin>>search;

   

    printf("%d", arr[search]);

}