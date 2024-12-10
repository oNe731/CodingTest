#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<int> InputN;
    for (size_t i = 0; i < N; i++)
    {
        int Number;
        cin >> Number;
        InputN.insert(Number);
    }

    int M;
    cin >> M;
    vector<int> Result(M);
    for (size_t i = 0; i < M; i++)
    {
        int Number;
        cin >> Number;

        Result[i] = InputN.count(Number) ? 1 : 0;
    }

    for (size_t i = 0; i < Result.size(); i++)
        cout << Result[i] << " ";
    cout << "\n";

    return 0;
}