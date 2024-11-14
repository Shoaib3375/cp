#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[20], s2[20];

    while (scanf("%s %s", s1, s2) != EOF)
    {
        int l1 = strlen(s1);
        bool flag = false;
        for (int i = 0; i < l1; i++)
        {
            int v1 = s1[i] - '0', v2 = s2[i] - '0';
            int v = max(v1, v2) - min(v1, v2);
            if (v == 0 && !flag)
            {
                continue;
            }
            flag = true;
            printf("%d", v);
        }
        if (!flag)
            printf("0");
        puts("");
    }

    return 0;
}