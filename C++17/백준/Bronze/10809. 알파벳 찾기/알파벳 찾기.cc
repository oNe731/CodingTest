#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string Str;
    cin >> Str;

    string Base = "abcdefghijklmnopqrstuvwxyz";
    int BaseCount = Base.length();
    int StrCount  = Str.length();
    for (size_t i = 0; i < BaseCount; i++)
    {
        bool Same = false;
        for (size_t j = 0; j < StrCount; j++)
        {
            if (!Same && Base[i] == Str[j])
            {
                cout << j << " ";
                Same = true;
            }
        }

        if(!Same)
            cout << -1 << " ";
    }

    return 0;
}