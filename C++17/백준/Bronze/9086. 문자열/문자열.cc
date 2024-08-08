#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    for (size_t i = 0; i < Count; i++)
    {
        string str;
        cin >> str;

        cout << str[0];
        cout << str[str.length() - 1] << endl;
    }

    return 0;
}