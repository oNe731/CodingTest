#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int CountA, CountB;
    cin >> CountA >> CountB;

    map<int, int> NumbersA;
    for (int i = 0; i < CountA; ++i)
    {
        int Number;
        cin >> Number;

        NumbersA[Number] = 0;
    }

    map<int, int> NumbersB;
    for (int i = 0; i < CountB; ++i)
    {
        int Number;
        cin >> Number;

        NumbersB[Number] = 0;
    }

    int Result = 0;
    for (auto& pair : NumbersA)
    {
        auto it = NumbersB.find(pair.first);
        if (it == NumbersB.end())
            Result++;
    }

    for (auto& pair : NumbersB)
    {
        auto it = NumbersA.find(pair.first);
        if (it == NumbersA.end())
            Result++;
    }

    cout << Result << "\n";
    return 0;
}