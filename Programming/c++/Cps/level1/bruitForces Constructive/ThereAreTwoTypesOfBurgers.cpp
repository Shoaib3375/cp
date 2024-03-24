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

        if (priceHam > priceChicken)
        {
            mxPrice = priceHam;
            mxPricePattiNum = numPatti;

            mnPrice = priceChicken;
            mnPricePattiNum = numKut;
        }
        else
        {
            mxPrice = priceChicken;
            mxPricePattiNum = numKut;

            mnPrice = priceHam;
            mnPricePattiNum = numPatti;
        }

        int numBurger = numBuns / 2;
        int profit = 0;

        if (mxPricePattiNum >= numBurger)
        {
            numBurger = 0;
            profit += (numBurger * mxPrice);
        }
        else
        {
            numBurger -= mxPricePattiNum;
            profit += (mxPrice * mxPricePattiNum);
        }

        if (mnPricePattiNum >= numBurger)
        {
            profit += (numBurger * mnPrice);
        }
        else
        {
            profit += (mnPrice * mnPricePattiNum);
        }

        cout << profit<<endl;
        
    }
    return 0;
}