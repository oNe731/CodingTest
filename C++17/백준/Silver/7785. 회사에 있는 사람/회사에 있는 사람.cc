#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int Count;
    cin >> Count;

    map<string, string> Company;
    for (int i = 1; i <= Count; ++i)
    {
        string Name, Entry;
        cin >> Name >> Entry;

        Company[Name] = Entry;
    }

    for (auto it = Company.rbegin(); it != Company.rend(); ++it) 
    {
        if (it->second == "enter")
            std::cout << it->first << "\n";
    }

    return 0;
}