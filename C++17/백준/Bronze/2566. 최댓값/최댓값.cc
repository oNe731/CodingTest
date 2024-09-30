#include <iostream>

using namespace std;

int main()
{
    int maxNumber = 0, maxI = 0, maxJ = 0;
    int Numbers[9][9];
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9; j++)
        {
            cin >> Numbers[i][j];
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