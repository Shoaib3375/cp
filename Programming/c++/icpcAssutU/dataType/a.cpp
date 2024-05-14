
#include<bits/stdc++.h>
using namespace std;
main(){
        int h;
    int w;

    while(1)
    {
        cin>>h>>w;
        if(h==0 && w==0)
        {
            break;
        }
        for(int i =1; i<=h; i++)
        {
            for(int j=1; j<=w; j++)
            {
                cout << (i % 2 != 0 ? (j % 2 != 0 ? "#" : ".") : (j % 2 != 0 ? "." : "#"));

            }
            cout<<"\n";

        }
        cout<<"\n";
    }





    return 0;
    
}