#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> Numbers;
int White = 0;
int Blue = 0;

void Check(int StartX, int StartY, int Size)
{
    int BaseNumber = Numbers[StartY][StartX];
    bool Same = true;

    for (int i = StartY; i < StartY + Size; ++i)
    {
        for (int j = StartX; j < StartX + Size; ++j)
        {
            if (Numbers[i][j] != BaseNumber)
            {
                Same = false;
                break;
            }

            if (Same == false)
                break;
        }
    }

    if (Same == true)
    {
        if (BaseNumber == 0)
            White++;
        else if (BaseNumber == 1)
            Blue++;
        return;
    }

    int Half = Size / 2;
    Check(StartX, StartY, Half);
    Check(StartX + Half, StartY, Half);
    Check(StartX, StartY + Half, Half);
    Check(StartX + Half, StartY + Half, Half);
}

int main() {
    int Number = 0;
    cin >> Number;

    Numbers.resize(Number, vector<int>(Number, 0));
    for (int i = 0; i < Number; ++i)
    {
        for (int j = 0; j < Number; ++j)
            cin >> Numbers[i][j];
    }

    Check(0, 0, Number);
    cout << White << "\n";
    cout << Blue << "\n";
    return 0;
}