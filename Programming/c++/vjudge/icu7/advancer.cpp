#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int scores[n];
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
    int advancers = 0;
    int kth_place_score = scores[k - 1];
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= kth_place_score && scores[i] > 0) {
            advancers++;
        } else {
            break;  
        }
    }
    cout << advancers << endl;

    return 0;
}


// int main() {
//   int n, k;
//   cin >> n >> k;
//   vector<int> scores(n);
//   for (auto& score : scores) {
//     cin >> score;
//   }
//   int kth_place_score = scores[k - 1];
//   int advancers = 0;
//   for (int score : scores) {
//     if (score >= kth_place_score && score > 0) {
//       advancers++;
//     }
//   }
//   cout << advancers << endl;
//   return 0;
// }
