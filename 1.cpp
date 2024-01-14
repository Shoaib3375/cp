#include <bits/stdc++.h>
using namespace std;
const int mx = 100013;
int a[mx];
int b[mx];
int freq[mx];

#define ll long long


vector<int> optimal_sum_after_game(int t, vector<vector<int>>& test_cases) {
    vector<int> results;
    
    for (int i = 0; i < t; ++i) {
        int n, k, x;
        n = test_cases[i][0];
        k = test_cases[i][1];
        x = test_cases[i][2];
        
        vector<int> array(test_cases[i].begin() + 3, test_cases[i].end());
        
        // Sort the array in non-decreasing order
        sort(array.begin(), array.end());
        
        // Step 2: Remove elements by Alice
        for (int j = 0; j < n; ++j) {
            if (array[j] > 0 && k > 0) {
                array[j] = 0;
                k--;
            }
        }
        
        // Step 3: Multiply elements by -1 by Bob
        if (x % 2 == 1) {
            for (int j = 0; j < x; ++j) {
                array[j] = -array[j];
            }
        }
        
        // Step 4: Calculate and store the result
        int result = 0;
        for (int j = 0; j < n; ++j) {
            result += array[j];
        }
        results.push_back(result);
    }
    
    return results;
}

int main() {
    int t;
    cin >> t;

    vector<vector<int>> test_cases;

    for (int i = 0; i < t; ++i) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> array(n);
        for (int j = 0; j < n; ++j) {
            cin >> array[j];
        }
    }      
}