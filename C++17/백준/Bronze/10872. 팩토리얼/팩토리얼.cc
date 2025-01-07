#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Input;
    cin >> Input;

    int Result = 1;
    for (int i = Input; i > 0; --i)
        Result *= i;
    cout << Result << "\n";
    return 0;
}