#include <iostream>
using namespace std;
int light(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int grid[3][3];
    int initallight[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] % 2 == 0)
            {
                grid[i][j] = 0;
            }
            else
            {
                grid[i][j] = 1;
            }
            initallight[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 1)
            {
                initallight[i][j] = light(initallight[i][j]);
                if (i > 0)
                {
                    initallight[i - 1][j] = light(initallight[i - 1][j]);
                }
                if (j > 0)
                {
                    initallight[i][j - 1] = light(initallight[i][j - 1]);
                }
                if (i < 2)
                {
                    initallight[i + 1][j] = light(initallight[i + 1][j]);
                }
                if (j < 2)
                {
                    initallight[i][j + 1] = light(initallight[i][j + 1]);
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << initallight[i][j]; 
        }
        cout << endl;
    }
}