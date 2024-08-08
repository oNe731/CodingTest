#include <iostream>

using namespace std;

int main() 
{
    int MaxNumber, InputCount;
    cin >> MaxNumber >> InputCount;

    int* Basket = new int[MaxNumber];
    for (size_t i = 0; i < MaxNumber; i++)
        Basket[i] = 0;

    for (size_t i = 0; i < InputCount; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;

        for (size_t j = A - 1; j < B; j++)
            Basket[j] = C;
    }

    for (size_t i = 0; i < MaxNumber; i++)
        cout << Basket[i] << " ";
    cout << endl;

    delete[] Basket;

    return 0;
}