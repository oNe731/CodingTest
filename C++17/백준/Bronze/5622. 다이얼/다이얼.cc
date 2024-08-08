#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    string InputStr;
    cin >> InputStr;

    int Result = 0;
    for (int i = 0; i < InputStr.length(); ++i)
    {
        char chars = InputStr[i];
        if (chars == 'A' || chars == 'B' || chars == 'C')
        {
            Result += 3;
        }
        else if (chars == 'D' || chars == 'E' || chars == 'F')
        {
            Result += 4;
        }
        else if (chars == 'G' || chars == 'H' || chars == 'I')
        {
            Result += 5;
        }
        else if (chars == 'J' || chars == 'K' || chars == 'L')
        {
            Result += 6;
        }
        else if (chars == 'M' || chars == 'N' || chars == 'O')
        {
            Result += 7;
        }
        else if (chars == 'P' || chars == 'Q' || chars == 'R' || chars == 'S')
        {
            Result += 8;
        }
        else if (chars == 'T' || chars == 'U' || chars == 'V')
        {
            Result += 9;
        }
        else if (chars == 'W' || chars == 'X' || chars == 'Y' || chars == 'Z')
        {
            Result += 10;
        }
    }

    cout << Result << endl;

    return 0;
}