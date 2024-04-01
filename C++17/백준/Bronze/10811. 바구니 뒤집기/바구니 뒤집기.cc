#include <iostream>

using namespace std;

int main() 
{
    int N, M; // N은 바구니 개수 // M은 입력받을 횟수
    cin >> N >> M;

    int* Number = new int[N];
    int* Save   = new int[N];
    for (size_t i = 0; i < N; i++)
    {
        Number[i] = i + 1;
        Save[i] = Number[i];
    }
        
    for (size_t i = 0; i < M; i++)
    {
        int I, J;
        cin >> I >> J;

        I -= 1;
        J -= 1;

        int Count = 0;
        for (size_t j = I; j <= J; j++)
        {
            Number[j] = Save[J - Count];
            Count++;
        }

        for (size_t i = 0; i < N; i++)
            Save[i] = Number[i];
    }

    for (size_t i = 0; i < N; i++)
        cout << Number[i] << " ";

    delete[] Number;
    delete[] Save;

    return 0;
}