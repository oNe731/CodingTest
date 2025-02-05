#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> Input(8);
    for (size_t i = 0; i < 8; i++)
        cin >> Input[i];

    int Diff = Input[0] - Input[1];
    if (Diff == -1)
    {
        for (size_t i = 2; i < 8; i++)
        {
            if (Input[i - 1] - Input[i] != -1)
            {
                cout << "mixed" << "\n";
                return 0;
            }
        }
        cout << "ascending" << "\n";
    }
    else if (Diff == 1)
    {
        for (size_t i = 2; i < 8; i++)
        {
            if (Input[i - 1] - Input[i] != 1)
            {
                cout << "mixed" << "\n";
                return 0;
            }
        }
        cout << "descending" << "\n";
    }
    else
    {
        cout << "mixed" << "\n";
    }

    return 0;
}