#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Count;
    cin >> Count;

    std::vector<pair<int, int>> XY(Count);
    for (size_t i = 0; i < Count; i++)
        cin >> XY[i].second >> XY[i].first;
    sort(XY.begin(), XY.end());

    for (size_t i = 0; i < Count; i++)
        cout << XY[i].second << " " << XY[i].first << "\n";
    return 0;
}