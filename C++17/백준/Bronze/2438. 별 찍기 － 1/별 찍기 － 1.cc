#include <iostream>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    for (size_t i = 0; i < Count; i++)
    {
        for (size_t j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}