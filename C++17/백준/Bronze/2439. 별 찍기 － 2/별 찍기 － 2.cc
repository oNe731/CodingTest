#include <iostream>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    for (size_t i = 0; i < Count; i++)
    {
        for (size_t j = 1; j < Count - i; j++)
            cout << " ";

        for (size_t k = 0; k < i + 1; k++)
            cout << "*";

        cout << endl;
    }

    return 0;
}