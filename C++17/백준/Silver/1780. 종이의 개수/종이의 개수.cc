#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> Numbers;
int MinusOne = 0;
int Zero = 0;
int One = 0;
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
        }

        if (Same == false) 
            break;
    }

    if (Same == true)
    {
        if (BaseNumber == -1)
            MinusOne++;
        else if (BaseNumber == 0)
            Zero++;
        else if (BaseNumber == 1)
            One++;
        return;
    }

    int Slice = Size / 3;
    Check(StartX, StartY, Slice);
    Check(StartX + Slice, StartY, Slice);
    Check(StartX + (Slice * 2), StartY, Slice);
    Check(StartX, StartY + Slice, Slice);
    Check(StartX + Slice, StartY + Slice, Slice);
    Check(StartX + (Slice * 2), StartY + Slice, Slice);
    Check(StartX, StartY + (Slice * 2), Slice);
    Check(StartX + Slice, StartY + (Slice * 2), Slice);
    Check(StartX + (Slice * 2), StartY + (Slice * 2), Slice);
    return;
}

int main() {
    int Number;
    cin >> Number;

    Numbers.resize(Number, vector<int>(Number, 0));
    for (int i = 0; i < Number; ++i)
    {
        for (int j = 0; j < Number; ++j)
            cin >> Numbers[i][j];
    }

    Check(0, 0, Number);
    cout << MinusOne << "\n";
    cout << Zero << "\n";
    cout << One << "\n";
    return 0;
}