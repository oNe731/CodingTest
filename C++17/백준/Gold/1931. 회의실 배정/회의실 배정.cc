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

    vector<pair<int, int>> Times;
    for (size_t i = 0; i < InputCount; i++)
    {
        int Start, End;
        cin >> Start >> End;
        Times.push_back({ End, Start });
    }
    sort(Times.begin(), Times.end());

    int Count = 1;
    int Last = Times[0].first;
    for (size_t i = 1; i < InputCount; i++)
    {
        if (Last <= Times[i].second)
        {
            Count++;
            Last = Times[i].first;
        }
    }
    cout << Count << "\n";
    return 0;
}