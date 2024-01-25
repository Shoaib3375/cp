#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d double

main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    int res;
    switch (s)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    }

    if (res == c)
        printf("Yes");
    else
        printf("%d", res);
}