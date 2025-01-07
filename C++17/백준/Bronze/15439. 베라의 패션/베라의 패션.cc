#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Input;
    cin >> Input;

    int Result = (Input - 1) * Input;

    cout << Result << "\n";
    return 0;
}