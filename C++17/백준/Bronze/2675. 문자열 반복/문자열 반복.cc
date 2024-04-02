#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    int Number;
    string Str;

    for (size_t i = 0; i < Count; i++)
    {
        cin >> Number >> Str;
        for (size_t k = 0; k < Str.length(); k++)
        {
            for (size_t j = 0; j < Number; j++)
            {
                cout << Str[k];
            }
        }
        cout << endl;
    }

    return 0;
}