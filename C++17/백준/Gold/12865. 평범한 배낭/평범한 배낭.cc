#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> Objects(N);
    for (size_t i = 0; i < N; i++)
    {
        int W, V;
        cin >> W >> V;
        Objects[i] = { W, V };
    }

    vector<int> Values(K + 1);
    for (size_t i = 0; i < N; i++)
    {
        int Weight = Objects[i].first;
        int Value = Objects[i].second;
        for (size_t j = K; j >= Weight; --j)
        {
            int index = j - Weight;
            Values[j] = max(Values[j], Values[index] + Value);
        }
    }
    cout << Values[K] << "\n";
    return 0;
}