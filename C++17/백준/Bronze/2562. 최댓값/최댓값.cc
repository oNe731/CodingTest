#include <iostream>

using namespace std;

int main() 
{
    int Number[9] = {};
    for (size_t i = 0; i < 9; i++)
        cin >> Number[i];

    int Max = 0, Count = 0;
    for (size_t i = 0; i < 9; i++)
    {
        if (Number[i] > Max)
        {
            Max = Number[i];
            Count = i + 1;
        }
    }

    cout << Max << endl;
    cout << Count << endl;

    return 0;
}