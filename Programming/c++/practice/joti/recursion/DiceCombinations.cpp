    #include <bits/stdc++.h>
    using namespace std;
    int solve(int sum)
    {
        if (sum == 0)
            return 1;
        

        int res = 0;
        for (int j = 1; j <= 6; j++)
        {
            if (sum >= j)
            {
                
                res += solve(sum - j);
            }
        }
        return res;
    }
    int main()
    {
        int n;
        cin >> n;
        int ans = solve(n);
        cout << ans << '\n';
    }