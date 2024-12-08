#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    std::vector<int> Numbers(N);
    for (int i = 0; i < N; ++i)
        cin >> Numbers[i];

    sort(Numbers.begin(), Numbers.end(), greater<int>());

    int Index = K - 1;
    if (Index < 0)
        Index = 0;
    cout << Numbers[Index] << "\n";
    return 0;
}