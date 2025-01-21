#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,string>> allstudents;
    int n;
    cin>> n;
    int roll;
    string name;
    for (int i = 0; i < n; i++)
    {
        cin>> roll>> name;
        
        allstudents.push_back({roll,name});
    }
    for (auto currentS : allstudents)
    {
        cout<< "Roll = "<<currentS.first<<" => " <<currentS.second<<endl;
    }
    
    
}