#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int Sum = 2;
    for (size_t i = 1; i < N; i++)
        Sum *= 2;
    Sum += 1;

    cout << (Sum * Sum) << "\n";
    return 0;
}