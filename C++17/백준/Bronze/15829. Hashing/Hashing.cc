#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int InputCount;
    cin >> InputCount;
    string InputString;
    cin >> InputString;

    int Result = 0;
    for (size_t i = 0; i < InputString.length(); i++)
        Result += (InputString[i] - 96) * pow(31, i);
    cout << Result << "\n";
    return 0;
}