#include <iostream>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    int* Input = new int[N];
    for (size_t i = 0; i < N; i++)
        cin >> Input[i];

    int Max = 0;
    for (size_t i = 0; i < N; i++)
    {
        if (Max < Input[i])
            Max = Input[i];
    }

    double Sum = 0;
    for (size_t i = 0; i < N; i++)
    {
        double Score = static_cast<double>(Input[i]) / static_cast<double>(Max) * 100.f;
        Sum += Score;
    }

    cout << Sum / static_cast<double>(N);
    delete[] Input;

    return 0;
}