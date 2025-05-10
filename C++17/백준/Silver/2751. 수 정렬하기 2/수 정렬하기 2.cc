#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int InputCount;
    cin >> InputCount;

    vector<int> Inputs;
    for (size_t i = 0; i < InputCount; i++)
    {
        int InputNumber;
        cin >> InputNumber;
        Inputs.push_back(InputNumber);
    }

    sort(Inputs.begin(), Inputs.end()); // less<int>(); greater<int>();
    for (auto Number : Inputs)
        cout << Number << "\n";
    return 0;
}