#include <iostream>

using namespace std;

int main()
{
    int ConfettiCount;
    cin >> ConfettiCount;

    bool pixelUse[100][100] = { false };
    for (size_t i = 0; i < ConfettiCount; i++)
    {
        int Left, Down;
        cin >> Left >> Down;
        for (int j = Left; j < Left + 10; j++)
        {
            for (int k = Down; k < Down + 10; k++)
                pixelUse[j][k] = true;
        }
    }

    int Allextent = 0;
    for (size_t i = 0; i < 100; i++)
    {
        for (size_t j = 0; j < 100; j++)
        {
            if (pixelUse[i][j] == true)
                Allextent++;
        }
    }

    cout << Allextent << "\n";
    return 0;
}