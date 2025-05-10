#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int InputCount;
    cin >> InputCount;
    map<int, int> Numbers;
    for (size_t i = 0; i < InputCount; i++)
    {
        int InputNumber;
        cin >> InputNumber;
        Numbers[InputNumber] = 1;
    }

    cin >> InputCount;
    for (size_t i = 0; i < InputCount; i++)
    {
        int InputNumber;
        cin >> InputNumber;
        cout << Numbers[InputNumber] << "\n";
    }

    return 0;
}