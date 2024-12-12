#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int CountA, CountB;
    cin >> CountA >> CountB;

    map<string, int> Pokemon;
    vector<string> Names(CountA + 1);
    for (int i = 1; i <= CountA; ++i)
    {
        string Name;
        cin >> Name;

        Pokemon[Name] = i;
        Names[i] = Name;
    }

    std::vector<string> Result(CountB);
    for (int i = 0; i < CountB; ++i)
    {
        string Name;
        cin >> Name;

        auto it = Pokemon.find(Name);
        if (it != Pokemon.end())
            Result[i] = to_string(it->second);
        else 
            Result[i] = Names[stoi(Name)];
    }

    for (int i = 0; i < CountB; ++i)
        cout << Result[i] << "\n";

    return 0;
}