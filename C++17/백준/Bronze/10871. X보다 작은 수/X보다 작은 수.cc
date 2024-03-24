#include <iostream>

using namespace std;

int main() 
{
    int N, X;
    cin >> N >> X;

    int* Numbers = new int[N];
    for (size_t i = 0; i < N; i++)
    {
        cin >> Numbers[i];
    }

    for (size_t i = 0; i < N; i++)
    {
        if (Numbers[i] < X)
            cout << Numbers[i] << " ";
    }

    cout << endl;

    return 0;
}