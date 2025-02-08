#include<bits/stdc++.h>
using namespace std;
int main(){
    struct student
    {
        int id;
        char* name;
    };
    struct student one;
    one.id = 1;
    one.name = "Shoaib Islam";
    cout << one.id<<endl;
    cout << one.name<<endl;    
}