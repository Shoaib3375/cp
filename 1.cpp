// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int a, b;
//   cin >> a >> b;
//   double c = (a-b)/3.0 + b;
//   cout <<setprecision(10)<< c << endl;
// }

// #include <bits/stdc++.h>
// #include <omp.h>
// using namespace std;

// typedef long long int ll;

// int main()
// {
//     ll n, m = 0;
//     cin >> n;
//   if(n/100)   
//     m+=(n/100), n-=(n/100)*100; 
//   if(n/20)   
//     m+=(n/20), n-=(n/20)*20; 
//   if(n/10)  
//     m+=(n/10), n-=(n/10)*10;
//   if(n/5)   
//     m+=(n/5), n-=(n/5)*5; 
//     m+=n;   
//     cout << m;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int t; 
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         char arr[n];
//         map<char, int> l;
//         map<char, int> repl;
//         int max_rep=0;
//         for(int i=0; i<n; i++){
//             cin >> arr[i];
//             l[arr[i]] ++;
//         }
//         for(int i=1; i<n; i++){
//             if(arr[i] == arr[i-1])
//                 max_rep=max(max_rep, l[arr[i]]);
//         }
//         if(max_rep) cout << max(2*max_rep-n, n%2) <<"\n";
//         else cout << n%2 << "\n";
//     }
//     return 0;
// }

#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string t;
    std::cin >> t;

    // Initialize an empty string for the decrypted result
    std::string s = "";

    // Start with the first character of t
    char current_char = t[0];

    // Iterate through the characters of t
    for (int i = 1; i < n; ++i) {
        // Check if the current character is different from the previous one
        if (t[i] != current_char) {
            // Calculate the number of times the current character was repeated
            int repeat_count = i;
            // Append the character to the decrypted string
            s += std::string(repeat_count, current_char);
            // Update the current character to the new one
            current_char = t[i];
        }
    }

    // Append the last character to the decrypted string
    s += std::string(n - s.length(), current_char);

    // Print the decrypted string
    std::cout << s << std::endl;

    return 0;
}
