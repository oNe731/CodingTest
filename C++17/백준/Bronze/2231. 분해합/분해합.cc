#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (size_t i = 1; i < N; i++)
    {
        int Result = i;

        int Num = i;
        int Sum = 0;
        while (Num != 0)
        {
            Sum += Num % 10;
            Num /= 10;
        }
        Result += Sum;

        if (Result == N)
        {
            cout << i << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";
    return 0;
}