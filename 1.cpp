#include <bits/stdc++.h>
using namespace std;
char getGrade(int score) {
    if (score >= 90) return 'A';
    else return 'B';
}
int main()
{
    int score;
    cin >> score;
    cout << getGrade(score) << endl;
    //H.IdiotSquad$#@1234
    return 0;
}