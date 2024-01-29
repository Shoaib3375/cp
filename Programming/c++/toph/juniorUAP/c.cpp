#include <iostream>
#include <vector>

using namespace std;

int minCalendarsToPrint(int n, vector<int>& batches) {
    int totalStudents = 0;
    for (int i = 0; i < n; ++i) {
        totalStudents += batches[i];
    }

    int minCalendars = (totalStudents + 23) / 24 * 24;
    return minCalendars;
}

int main() {
    // Read input
    int n;
    cin >> n;

    vector<int> batches(n);
    for (int i = 0; i < n; ++i) {
        cin >> batches[i];
    }

    // Calculate and print the result
    int result = minCalendarsToPrint(n, batches);
    cout << result << endl;

    return 0;
}
