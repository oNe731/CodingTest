#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Count;
    cin >> Count;

    vector<pair<pair<int, int>, string>> Datas;
    for (int i = 0; i < Count; i++)
    {
        int Age;
        string Name;
        cin >> Age >> Name;

        Datas.push_back({ { Age, i }, Name });
    }

    sort(Datas.begin(), Datas.end(), [](const pair<pair<int, int>, string>& a, const pair<pair<int, int>, string>& b) {
        if (a.first.first == b.first.first)
            return a.first.second < b.first.second;
        return a.first.first < b.first.first; });

    for (int i = 0; i < Count; i++)
        cout << Datas[i].first.first << " " << Datas[i].second << "\n";

    return 0;
}