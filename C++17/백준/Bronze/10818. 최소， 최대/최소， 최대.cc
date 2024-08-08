#include <iostream>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    int* Numbers = new int[N];
    for (size_t i = 0; i < N; i++)
    {
        cin >> Numbers[i];
    }

    int Min = Numbers[0];
    int Max = Numbers[0];
    for (size_t i = 0; i < N; i++)
    {
        if (Numbers[i] < Min)
            Min = Numbers[i];
        else if(Numbers[i] > Max)
            Max = Numbers[i];
    }

    cout << Min << " " << Max << endl;

    delete[] Numbers;

    return 0;
}