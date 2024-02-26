#include <bits/stdc++.h>
using namespace std;
int main()
{

    int dilshad_score, friend1_score, friend2_score, friend3_score;
    cin >> dilshad_score >> friend1_score >> friend2_score >> friend3_score;

    int friends_more_than_dilshad = 0;
    if (friend1_score > dilshad_score)
    {
        friends_more_than_dilshad++;
    }
    if (friend2_score > dilshad_score)
    {
        friends_more_than_dilshad++;
    }
    if (friend3_score > dilshad_score)
    {
        friends_more_than_dilshad++;
    }

    cout << friends_more_than_dilshad << endl;
}
