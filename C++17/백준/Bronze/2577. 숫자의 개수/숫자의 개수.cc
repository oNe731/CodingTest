#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    int Result = A * B * C;
    vector<int> Counts(10);
    while (Result != 0)
    {
        int Remain = Result % 10;
        Counts[Remain]++;
        Result /= 10;
    }

    for (size_t i = 0; i < Counts.size(); i++)
        cout << Counts[i] << "\n";
    return 0;
}