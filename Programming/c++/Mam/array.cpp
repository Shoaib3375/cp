#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 6;
    int ageArray[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        int age;
        cin >> age;

        if (cin.fail() || age < 0 || age > 20)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            --i; 
        }
        else
        {
            ageArray[i] = age;
        }
    }

    // Display the age array

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        cout << ageArray[i] << " ";
    }
    cout << endl;

    return 0;
}
