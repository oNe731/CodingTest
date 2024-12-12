#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int CountN, CountM;
    cin >> CountN >> CountM;

    int CountMax = CountN + CountM;
    map<string, int> Names;
    for (int i = 0; i < CountMax; ++i)
    {
        string Number;
        cin >> Number;

        Names[Number] += 1;
    }

    vector<string> Result;
    for (auto& pair : Names)
    {
        if (pair.second >= 2)
            Result.push_back(pair.first);
    }

    cout << Result.size() << "\n";
    for (int i = 0; i < Result.size(); ++i)
        cout << Result[i] << "\n";
    return 0;
}