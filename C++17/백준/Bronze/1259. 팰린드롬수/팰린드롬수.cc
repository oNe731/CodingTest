#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        string Num;
        cin >> Num;
        if (Num == "0")
            break;

        bool Clear = true;
        int Half = Num.length() / 2;
        for (size_t i = 0; i <= Half; i++)
        {
            if (Num[i] != Num[Num.size() - 1 - i])
            {
                Clear = false;
                break;
            }
        }

        if(Clear == true)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }

    return 0;
}