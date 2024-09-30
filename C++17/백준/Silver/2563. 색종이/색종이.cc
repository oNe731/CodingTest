#include <iostream>

using namespace std;

int main()
{
    int Allextent = 0;

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
            {
                if (pixelUse[j][k] == false)
                {
                    pixelUse[j][k] = true;
                    Allextent++;
                }
            }
                
        }
    }

    cout << Allextent << "\n";
    return 0;
}