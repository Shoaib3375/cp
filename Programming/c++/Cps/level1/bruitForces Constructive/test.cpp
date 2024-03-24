#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int b, p, f, h, c;
        scanf("%d %d %d %d %d", &b, &p, &f, &h, &c); /// b = 16, p = 3, f = 6, h = 2, c = 10

        int mxPrice = h, mxPricePaticeNum = p;
        int mnPrice = c, mnPricePaticeNum = f;

        if ( mxPrice < mnPrice ) {
            mxPrice = c, mxPricePaticeNum = f; /// mxPrice = 10, mxPricePaticeNum = 6
            mnPrice = h, mnPricePaticeNum = p; /// mnPrice = 2, mnPricePaticeNum = 3
        }

        int burgurNumber = b / 2; /// burgurNumber = 16 / 2 = 8;
        int ans = 0;

        if ( mxPricePaticeNum > burgurNumber )   /// 6 < 8
        {
            ans += ( burgurNumber * mxPrice ); /// ans += ( 4 * 10 );
            burgurNumber = 0;
        }
        else
        {
            ans += ( mxPricePaticeNum * mxPrice ); /// ans += ( 6 * 10 )
            burgurNumber -= mxPricePaticeNum; /// burgurNumber = burgurNumber - mxPricePaticeNum = 8 - 6 = 2
        }

        if ( mnPricePaticeNum > burgurNumber )   /// 3 > 2
        {
            ans += (  burgurNumber * mnPrice );
        }
        else
        {
            ans += ( mnPricePaticeNum * mnPrice );
        }

        printf("%d\n", ans);
    }

    return 0;
}
