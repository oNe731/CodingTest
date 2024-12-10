#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int Count;
    cin >> Count;

    vector<pair<int, int>> XY(Count);
    for (size_t i = 0; i < Count; i++)
        cin >> XY[i].first >> XY[i].second;
    sort(XY.begin(), XY.end());
    
    for (size_t i = 0; i < Count; i++)
        cout << XY[i].first << " " << XY[i].second << "\n";
    return 0;
}