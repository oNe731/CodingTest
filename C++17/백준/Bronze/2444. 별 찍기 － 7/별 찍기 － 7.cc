#include <iostream>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    int Top   = 2 * Count / 2;
    int Lower = Top - 1;
    int All   = Top * 2 - 1;
    for (int i = 0; i < Top; ++i)
    {
        for (int j = 0; j < Lower - i; ++j)
            cout << " ";
        for (int k = 0; k <= i * 2; ++k)
            cout << "*";
        cout << endl;
    }

    for (int i = 0; i < Lower; ++i)
    {
        for (int j = 0; j <= i; ++j)
            cout << " ";
        for (int k = 0; k < All - ((i + 1) * 2); ++k)
            cout << "*";
        cout << endl;
    }

    return 0;
}