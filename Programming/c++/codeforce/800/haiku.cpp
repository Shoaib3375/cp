// #include<bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// bool isVowel ( char c )
// {
//     return ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
// }

// int main()
// {
//     optimize();

//     vector<string> v;
//     int cnt[] = { 5, 7, 5 };

//     for ( int i = 0; i < 3; i++ ) {
//         string s;
//         char c;
//         cin >> c;
//         getline ( cin, s );
//         s = c + s;

//         v.push_back ( s );
//     }

//     for ( int i = 0; i < 3; i++ ) {
//         int c = 0;

//         for ( auto u : v[i] ) {
//             if ( isVowel(u) ) c++;
//         }

//         if ( c != cnt[i] ) return cout << "NO\n", 0;
//     }

//     cout << "YES\n";
// }

#include <bits/stdc++.h>
using namespace std;

char S[1000];
int C[] = {5, 7, 5};

int main()
{

    bool ok = 1;
    for (int i = 0; i < 3 ; i++)
    {
        gets(S);
        int c = 0;
        for (int j = 0; S[j]; j++)
        {
            if (S[j] == 'a' || S[j] == 'e' || S[j] == 'i' || S[j] == 'o' || S[j] == 'u')
                c++;
        }
        if (c != C[i]) cout << "NO\n";
            
    }
    cout << "YES\n";

    return 0;
}
