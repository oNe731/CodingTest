#include <iostream>

using namespace std;

int main()
{
    int Numbers[9][9];
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9; j++)
            cin >> Numbers[i][j];
    }

    int maxNumber = 0;
    int maxI = 0;
    int maxJ = 0;
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9; j++)
        {
            if (Numbers[i][j] > maxNumber)
            {
                maxNumber = Numbers[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << maxNumber << "\n";
    cout << maxI + 1 << " " << maxJ + 1;
    return 0;
}