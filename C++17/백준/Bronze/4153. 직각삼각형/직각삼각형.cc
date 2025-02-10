#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> Result;
    while (true)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A == 0 && B == 0 && C == 0)
            break;

        if (A > B && A > C)
        {
            if ((B * B) + (C * C) == (A * A))
                Result.push_back("right");
            else
                Result.push_back("wrong");
        }
        else if (B > A && B > C)
        {
            if ((A * A) + (C * C) == (B * B))
                Result.push_back("right");
            else
                Result.push_back("wrong");
        }
        else
        {
            if ((A * A) + (B * B) == (C * C))
                Result.push_back("right");
            else
                Result.push_back("wrong");
        }
    }

    for (size_t i = 0; i < Result.size(); i++)
        cout << Result[i] << "\n";

    return 0;
}