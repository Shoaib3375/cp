#include <iostream>
using namespace std;

class Solution
{
public:
    int majorityWins(int arr[], int n, int x, int y)
    {
        int count_x = 0;
        int count_y = 0;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == x)
                count_x++;
            else if (arr[i] == y)
                count_y++;
        }

        return (count_x == count_y) ? min(x, y) : (count_x > count_y) ? x : y;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int x, y;
        cin >> x >> y;

        Solution obj;
        cout << obj.majorityWins(arr, n, x, y) << endl;
    }

    return 0;
}
