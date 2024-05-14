    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define d double
    main()
    {
        int A,B,result = 0;
        char S;
        cin >> A>>S>>B;

        if (S == '+')
        {
            result = A + B;
        }
        else if (S == '-')
        {
            result = A - B;
        }
        else if (S == '*')
        {
            result = A * B;
        }
        else if (S == '/')
        {
            result = A / B;
        }
        cout << result;
    }