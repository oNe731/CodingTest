#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int CountA;
    cin >> CountA;

    unordered_map<string, int> Numbers;
    for (int i = 0; i < CountA; ++i)
    {
        string Number;
        cin >> Number;

        Numbers[Number] += 1;
    }

    int CountB;
    cin >> CountB;

    vector<int> Result(CountB);
    for (int i = 0; i < CountB; ++i)
    {
        string Number;
        cin >> Number;

        Result[i] = Numbers[Number];
    }

    for (int i = 0; i < CountB; ++i)
        cout << Result[i] << " ";
    cout << "\n";

    return 0;
}