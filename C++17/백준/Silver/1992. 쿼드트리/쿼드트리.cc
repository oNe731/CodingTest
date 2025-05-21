#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> Numbers;
string Check(int StartX, int StartY, int Size)
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
        }

        if (Same == false) 
            break;
    }

    if (Same == true)
        return to_string(BaseNumber);

    int Half = Size / 2;
    return "(" + Check(StartX, StartY, Half) + Check(StartX + Half, StartY, Half) + Check(StartX, StartY + Half, Half) + Check(StartX + Half, StartY + Half, Half) + ")";
}

int main() {
    int Number;
    cin >> Number;

    Numbers.resize(Number, vector<int>(Number, 0));
    for (int i = 0; i < Number; ++i)
    {
        string StrNumber;
        cin >> StrNumber;
        for (int j = 0; j < Number; ++j)
            Numbers[i][j] = StrNumber[j] - 48;
    }

    cout << Check(0, 0, Number) << "\n";
    return 0;
}