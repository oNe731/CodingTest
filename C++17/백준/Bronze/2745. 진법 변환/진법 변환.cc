#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string InputStr;
    int InputNum;
    cin >> InputStr >> InputNum;

    int Result = 0;
    int Size = InputStr.size();
    for (size_t i = 0; i < Size; ++i)
    {
        int Char = (int)InputStr[i];

        int Num;
        if (58 > Char) // 숫자 48 ~ 57
            Num = Char - 48;
        else // 알파벳 65 ~ 90
            Num = Char - 55;

        int Square = InputNum;
        for (size_t j = i + 1; j < (Size - 1); j++)
            Square *= InputNum;
        if(i == Size - 1)
            Result += Num;
        else
            Result += Num * Square;
    }

    cout << Result << "\n";
    return 0;
}