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

    stack<int> Result;
    for (size_t i = 0; i < InputCount; i++)
    {
        string Input;
        cin >> Input;

        if (Input == "push")
        {
            int Number;
            cin >> Number;
            Result.push(Number);
        }
        else if (Input == "pop")
        {
            if (Result.empty() == false)
            {
                cout << Result.top() << "\n";
                Result.pop();
            }
            else
                cout << -1 << "\n";
        }
        else if (Input == "size")
        {
            cout << Result.size() << "\n";
        }
        else if (Input == "empty")
        {
            if (Result.empty() == true)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (Input == "top")
        {
            if (Result.empty() == false)
                cout << Result.top() << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}