#include <iostream>
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

    vector<int> Numbers;
    for (size_t i = 0; i < Count; i++)
    {
        int Number;
        cin >> Number;

        Numbers.push_back(Number);
    }

    if(Numbers.size() == 1)
        cout << Numbers[0] * Numbers[0] << "\n";
    else
    {
        sort(Numbers.begin(), Numbers.end());
        cout << Numbers[0] * Numbers[Numbers.size() - 1] << "\n";
    }

    return 0;
}