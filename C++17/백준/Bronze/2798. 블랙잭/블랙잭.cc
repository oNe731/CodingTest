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

    int Result = 0;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = i + 1; j < N; j++)
        {
            for (size_t k = j + 1; k < N; k++)
            {
                int Sum = Numbers[i] + Numbers[j] + Numbers[k];
                if (Sum <= M)
                {
                    if(Result < Sum)
                        Result = Sum;
                }
            }
        }
    }

    cout << Result << "\n";
    return 0;
}
