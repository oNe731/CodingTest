#include <iostream>
#include <map>

using namespace std;

int main() {
    int Result = 0;

    int CountA, CountB;
    cin >> CountA >> CountB;

    std::map<std::string, int> InputString;
    for (int i = 0; i < CountA; ++i)
    {
        string String;
        cin >> String;

        InputString.insert({ String, 0 });
    }

    for (int i = 0; i < CountB; ++i)
    {
        string String;
        cin >> String;

        if (InputString.find(String) != InputString.end())
            Result++;
    }

    cout << Result << "\n";
    return 0;
}