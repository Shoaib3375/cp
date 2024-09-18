#include<bits/stdc++.h>
using namespace std;
int main(){
    char ab, bc, ca;
    cin>> ab>> bc>> ca;
    if(ab==bc&&bc==ca) cout << "B\n";
    else if(ab==bc && bc!=ca) cout << "C\n";
    else cout << "A\n";
}