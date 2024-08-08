#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    cin >> str;

    bool Check = true;
    for (int i = 0; i < str.length() / 2; ++i)
    {
        if (str[i] != str[str.length() - 1 - i])
        {
            Check = false;
            break;
        }
    }

    if (Check == true)
        cout << 1;
    else
        cout << 0;

    return 0;
}