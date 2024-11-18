#include<stdio.h>
int sum(int n,int m){
    int total = n+m;
    return total;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d ",sum(n,m));
}