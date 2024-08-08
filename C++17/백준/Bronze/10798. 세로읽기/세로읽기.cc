#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str[5];
    cin >> str[0] >> str[1] >> str[2] >> str[3] >> str[4];

    for (int i = 0; i < 15; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (str[j].length() <= i)
                continue;
            cout << str[j][i];
        }
    }

    return 0;
}