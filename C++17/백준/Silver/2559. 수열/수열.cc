#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> Numbers(N);
    for (size_t i = 0; i < N; i++)
        cin >> Numbers[i];

    vector<int> SumNumbers(N + 1);
    for (size_t i = 1; i < N + 1; i++)
        SumNumbers[i] = SumNumbers[i - 1] + Numbers[i - 1];

    vector<int> Sums;
    for (size_t i = 1; i <= N - (K - 1); i++)
        Sums.push_back(SumNumbers[i - 1 + K] - SumNumbers[i - 1]);
    sort(Sums.begin(), Sums.end(), greater<int>());
    cout << Sums[0] << "\n";
    return 0;
}