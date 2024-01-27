#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
main()
{

    int l1, r1, l2, r2, st, en;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    if ((l2 < l1 && r2 < l1) || (l2 > r1 && r2 > l2))
        printf("-1");
    else
    {
        if (l1 > l2)
            st = l1;
        else
            st = l2;

        if (r1 > r2)
            en = r2;
        else
            en = r1;

        printf("%d %d", st, en);
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define d double
// int main() {
//     ll l1, r1, l2, r2;
//     cin >> l1 >> r1 >> l2 >> r2;

//     if (l1 <= r2 && l2 <= r1) {
//         ll start = max(l1, l2);
//         ll end = min(r1, r2);
//         cout << start << " " << end << endl;
//     } else {
//         cout << -1 << endl;
//     }

//     return 0;
// }
