#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Count;
    cin >> Count;

    for (size_t i = 0; i < Count; i++)
    {
        int A, B;
        cin >> A >> B;

        int MinNum = min(A, B);
        int MaxNum = 0;
        for (size_t i = 1; i <= MinNum; i++)
        {
            if (A % i == 0 && B % i == 0)
            {
                if (MaxNum < i)
                    MaxNum = i;
            }
        }

        cout << (A * B)/ MaxNum << "\n";
    }

    return 0;
}