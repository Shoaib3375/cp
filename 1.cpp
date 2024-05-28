#include <iostream>
#include <vector>

using namespace std;

pair<int, vector<int>> construct_array(int x) {
  int n = 1;
  vector<int> a;
  while (x > 0) {
    // Check LSB and previous element
    if ((x & 1) && (a.empty() || a.back() != -1)) {
      a.push_back(-1);
      x += (1 << (n - 1));  // Incorporate LSB into x using bit shift
    } else if (!a.empty() && a.back() == -1) {
      a.push_back(1);
      x -= (1 << (n - 1));  // Remove LSB from x using bit shift
    } else {
      a.push_back(0);
      x >>= 1;              // Shift x right by 1 bit (discard LSB)
    }
    n++;
  }
  return {n, a};
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int x;
    cin >> x;
    pair<int, vector<int>> result = construct_array(x);
    int n = result.first;
    vector<int> a = result.second;
    cout << n << endl;
    for (int num : a) {
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}
