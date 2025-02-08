#include<bits/stdc++.h>
using namespace std;
int main(){
    struct student
    {
        int id;
        char name[40];
    };
    struct student one;
    one.id = 1;
    strcpy(one.name,"Shoaib islam");
    cout << one.id<<endl;
    cout << one.name<<endl;
}