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
        string stringsA, stringsB;
        cin >> stringsA >> stringsB;

        if (stringsA == "ChongChong" || stringsB == "ChongChong")
        {
            Names[stringsA] = true;
            Names[stringsB] = true;
        }
        else
        {
            if (Names.find(stringsA) != Names.end() || Names.find(stringsB) != Names.end())
            {
                Names[stringsA] = true;
                Names[stringsB] = true;
            }
        }
    }

    cout << Names.size() << "\n";
    return 0;
}