#include <iostream>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    int All   = 2 * Count - 1;
    for (int i = 0; i < Count; ++i)
    {
        for (int j = 0; j < (Count - 1) - i; ++j)
            cout << " ";
        for (int k = 0; k <= i * 2; ++k)
            cout << "*";
        cout << endl;
    }

    for (int i = 0; i < (Count - 1); ++i)
    {
        for (int j = 0; j <= i; ++j)
            cout << " ";
        for (int k = 0; k < All - ((i + 1) * 2); ++k)
            cout << "*";
        cout << endl;
    }

    return 0;
}