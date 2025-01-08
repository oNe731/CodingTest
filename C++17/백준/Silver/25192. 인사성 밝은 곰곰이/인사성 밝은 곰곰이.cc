#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Count;
    cin >> Count;

    int Result = 0;
    map<string, bool> Names;
    for (int i = 0; i < Count; ++i)
    {
        string strings;
        cin >> strings;

        if (strings == "ENTER")
        {
            Names.clear();
        }
        else
        {
            if (Names.find(strings) == Names.end())
            {
                Names[strings] = true;
                Result++;
            }
        }
    }

    cout << Result << "\n";
    return 0;
}