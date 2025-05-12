#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int InputCount;
    cin >> InputCount;

    vector<int> Times(InputCount);
    for (size_t i = 0; i < InputCount; i++)
        cin >> Times[i];
    sort(Times.begin(), Times.end());

    int Before = Times[0];
    int Sum = Before;
    for (size_t i = 1; i < InputCount; i++)
    {
        Before += Times[i];
        Sum += Before;
    }

    cout << Sum << "\n";
    return 0;
}