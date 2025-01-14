#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Count;
    cin >> Count;

    vector<int> Counts(10001, 0);
    for (int i = 0; i < Count; i++)
    {
        int num;
        cin >> num;
        Counts[num]++;
    }

    for (int i = 0; i <= 10000; i++)
    {
        for (int j = 0; j < Counts[i]; j++)
            cout << i << "\n";
    }

    return 0;
}