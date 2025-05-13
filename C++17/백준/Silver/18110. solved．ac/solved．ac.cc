#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int Sum = 0;
    if (N == 0)
    {
        cout << Sum;
        return 0;
    }

    vector<int> Numbers(N);
    for (size_t i = 0; i < N; i++)
        cin >> Numbers[i];
    sort(Numbers.begin(), Numbers.end());

    int Start = round(N * 0.15f);
    int End = N - Start;

    for (size_t i = Start; i < End; i++)
        Sum += Numbers[i];

    int Count = Numbers.size() - (Start * 2);
    cout << round(float(Sum) / float(Count)) << "\n";
    return 0;
}