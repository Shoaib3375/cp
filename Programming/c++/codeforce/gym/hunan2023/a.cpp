#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> A_indices, B_indices, C_indices;


    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'A') {
            A_indices.push_back(i);
        } else if (S[i] == 'B') {
            B_indices.push_back(i);
        } else if (S[i] == 'C') {
            C_indices.push_back(i);
        }
    }

    int max_triples = 0;

    int i = 0, j = 0, k = 0;
    
    
    while (i < A_indices.size() && j < B_indices.size() && k < C_indices.size()) {
        if (A_indices[i] < B_indices[j] && B_indices[j] < C_indices[k]) {
            max_triples++;
            i++; j++; k++;  
        } else {
            
            if (A_indices[i] >= B_indices[j]) j++;
            else if (B_indices[j] >= C_indices[k]) k++;
            else i++;
        }
    }

    i = 0, j = 0, k = 0;

    
    while (k < C_indices.size() && j < B_indices.size() && i < A_indices.size()) {
        if (C_indices[k] < B_indices[j] && B_indices[j] < A_indices[i]) {
            max_triples++;
            k++; j++; i++;  
        } else {
          
            if (C_indices[k] >= B_indices[j]) j++;
            else if (B_indices[j] >= A_indices[i]) i++;
            else k++;
        }
    }
    cout << max_triples << endl;

    return 0;
}
