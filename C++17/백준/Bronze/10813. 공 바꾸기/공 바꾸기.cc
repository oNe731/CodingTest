#include <iostream>

using namespace std;

int main() 
{
    int MaxNumber, InputCount;
    cin >> MaxNumber >> InputCount;

    int* Basket = new int[MaxNumber];
    for (size_t i = 0; i < MaxNumber; i++)
        Basket[i] = i + 1;

    int A, B, C;
    for (size_t i = 0; i < InputCount; i++)
    {
        cin >> A >> B;
        C = Basket[A - 1];
        Basket[A - 1] = Basket[B - 1];
        Basket[B - 1] = C;
    }

    for (size_t i = 0; i < MaxNumber; i++)
        cout << Basket[i] << " ";
    cout << endl;

    delete[] Basket;

    return 0;
}