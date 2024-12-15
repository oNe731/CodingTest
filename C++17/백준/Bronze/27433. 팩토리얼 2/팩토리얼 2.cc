#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Number;
    cin >> Number;
    if (Number == 0)
    {
        cout << 1 << "\n";
        return 0;
    }

    long long Result = Number;
    for (int i = Number - 1; i > 0; --i)
        Result *= i;

    cout << Result << "\n";
    return 0;
}