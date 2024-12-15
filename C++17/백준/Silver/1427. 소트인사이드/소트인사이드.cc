#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string Count;
    cin >> Count;

    vector<int> Numbers;
    for (int i = 0; i < Count.size(); ++i)
        Numbers.push_back(Count[i] - 48);
    sort(Numbers.begin(), Numbers.end(), greater<int>());

    for (int i = 0; i < Numbers.size(); ++i)
        cout << Numbers[i];
    cout << "\n";
    return 0;
}