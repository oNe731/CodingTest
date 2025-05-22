#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> Numbers;

int Check(int StartX, int StartY, int Size)
{
    if (Size == 2)
    {
        vector<int> Vals;
        Vals.push_back(Numbers[StartY][StartX]);
        Vals.push_back(Numbers[StartY][StartX + 1]);
        Vals.push_back(Numbers[StartY + 1][StartX]);
        Vals.push_back(Numbers[StartY + 1][StartX + 1]);
        sort(Vals.begin(), Vals.end());
        return Vals[2];
    }

    vector<int> Vals;
    int Half = Size / 2;
    Vals.push_back(Check(StartX, StartY, Half));
    Vals.push_back(Check(StartX + Half, StartY, Half));
    Vals.push_back(Check(StartX, StartY + Half, Half));
    Vals.push_back(Check(StartX + Half, StartY + Half, Half));
    sort(Vals.begin(), Vals.end());
    return Vals[2];
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

    cout << Check(0, 0, Number) << "\n";
    return 0;
}