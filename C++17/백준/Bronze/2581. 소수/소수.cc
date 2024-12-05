#include <iostream>

using namespace std;

int main(void) {

    int M, N;
    cin >> M >> N;

    int Sum = 0;
    int Min = N;
    for (int i = M; i <= N; ++i)
    {
        if (i <= 1)
            continue;

        bool Sosu = true;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                Sosu = false;
                break;
            }
        }

        if (Sosu == true)
        {
            Sum += i;
            if(Min > i)
                Min = i;
        }
    }

    if(Sum == 0)
        cout << "-1" << "\n";
    else
    {
        cout << Sum << "\n";
        cout << Min << "\n";
    }

    return 0;
}