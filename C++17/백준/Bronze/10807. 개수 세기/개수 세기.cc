#include <iostream>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    int* Numbers = new int[Count];
    for (size_t i = 0; i < Count; i++)
    {
        cin >> Numbers[i];
    }

    int Number;
    cin >> Number;

    int SameCount = 0;
    for (size_t i = 0; i < Count; i++)
    {
        if (Numbers[i] == Number)
            SameCount++;
    }

    cout << SameCount << endl;

    return 0;
}