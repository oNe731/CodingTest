#include <iostream>
#include <string>
#include <set>
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

    set<string> SetStrings;
    for (int i = 0; i < Count; ++i)
    {
        string str;
        cin >> str;
        SetStrings.insert(str);
    }

    vector<string> VectorStrings;
    for (const auto& str : SetStrings)
        VectorStrings.push_back(str);

    sort(VectorStrings.begin(), VectorStrings.end(), [](const string& a, const string& b) {
        if (a.size() != b.size())
            return a.size() < b.size();
        return a < b;
        }
    );

    for (int i = 0; i < VectorStrings.size(); ++i)
        cout << VectorStrings[i] << "\n";

    return 0;
}