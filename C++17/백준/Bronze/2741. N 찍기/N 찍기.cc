#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Count;
    cin >> Count;
    for (size_t i = 1; i <= Count; i++)
        cout << i << "\n";
    return 0;
}