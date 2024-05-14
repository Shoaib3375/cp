#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define do double
#define ch char
main(){
    ll eyes,mouth,body, min = 0;
    cin >> eyes>>mouth>>body;

    if(eyes < mouth && eyes < body){
        min = eyes;
    }else if (mouth<eyes && mouth<<body)
    {
        min = mouth;
    }else if(body<eyes && body<< mouth){
        min = body;
    }
    ll neweyes = (eyes-min)/2;
    ll newMouth = mouth - min;
    ll newBody = body - min;

    if(neweyes <= newBody){
        cout << neweyes + min;
    }else if (newBody < neweyes)
    {
        cout << newBody + min;
    }
    
}