#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        ll numBuns, numPatti, numKut, priceHam, priceChicken;
        cin >> numBuns >> numPatti >> numKut >> priceHam >> priceChicken;
        ll mxPrice, mnPrice, mxPricePattiNum, mnPricePattiNum;
        ll chickenBurger = 0;
        ll beefBurger = 0;
        ll profit = 0;
        ll numBurger = numBuns/2;
        if(numBuns==1){
            cout << profit <<endl;
            return 0;
        }
        if(priceChicken>priceHam){
            while (numBurger>=numKut&&numKut!=0)
            {
                numKut--;
                numBurger--;
                chickenBurger++;
            }
        }else if (priceHam>priceChicken)
        {
            while (numBurger>=numPatti)
            {
                while (numBurger>=numPatti&&numPatti!=0)
                {
                    numPatti--;
                    numBurger--;
                    beefBurger++;
                }
                
            }
            
        }
        int chickenProfit = chickenBurger * priceChicken;
        int beefProfit = beefBurger * priceHam;
        profit = chickenProfit + beefProfit;
        cout << profit<<endl;
        

        
    }
    return 0;
}