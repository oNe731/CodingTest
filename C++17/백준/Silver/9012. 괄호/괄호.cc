#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int InputCount;
    cin >> InputCount;
    for (size_t i = 0; i < InputCount; i++)
    {
        string InputStr;
        cin >> InputStr;

        stack<char> Chars;
        bool Cout = false;
        for (size_t i = 0; i < InputStr.length(); i++)
        {
            if (InputStr[i] == '(')
            {
                Chars.push(InputStr[i]);
            }
            else if (InputStr[i] == ')')
            {
                if (Chars.empty() == false)
                    Chars.pop();
                else
                {
                    Cout = true;
                    cout << "NO" << "\n";
                    break;
                }
            }
        }

        if (Cout == false)
        {
            if (Chars.empty() == true)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }

    return 0;
}