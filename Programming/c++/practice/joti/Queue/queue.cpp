#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(22);
    q.push(2);

    // cout << q.front()<<endl;
    // q.pop();
    // cout << q.front()<<endl;
    // q.pop();
    // cout << q.front()<<endl;
    // q.pop();
    while (!q.empty())
    {
        cout << q.front()<<endl;
     q.pop();    
    }
    
}