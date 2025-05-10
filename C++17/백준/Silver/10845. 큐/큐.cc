#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int InputCount;
    cin >> InputCount;

    queue<int> Result;
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
                cout << Result.front() << "\n";
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
        else if (Input == "front")
        {
            if (Result.empty() == false)
                cout << Result.front() << "\n";
            else
                cout << -1 << "\n";
        }
        else if (Input == "back")
        {
            if (Result.empty() == false)
                cout << Result.back() << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}