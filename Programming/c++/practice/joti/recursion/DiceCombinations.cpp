    #include <bits/stdc++.h>
    using namespace std;
    long long  solve(long long sum)
    {
        if (sum == 0)
            return 1;
        

        long long res = 0;
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
        long long ans = solve(n);
        cout << ans << '\n';
    }