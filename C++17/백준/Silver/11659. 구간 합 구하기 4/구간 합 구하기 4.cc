#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> Numbers(N);
    for (size_t i = 0; i < N; i++)
        cin >> Numbers[i];

    vector<int> Sums(N + 1);
    for (size_t i = 1; i < N + 1; i++)
        Sums[i] = Sums[i - 1] + Numbers[i - 1];

    vector<int> Result(M);
    for (size_t i = 0; i < M; i++)
    {
        int I, J;
        cin >> I >> J;
        Result[i] = Sums[J] - Sums[I - 1];
    }

    for (size_t i = 0; i < Result.size(); i++)
        cout << Result[i] << "\n";

    return 0;
}