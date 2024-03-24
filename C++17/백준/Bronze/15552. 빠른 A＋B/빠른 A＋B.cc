#include <iostream>

using namespace std;

int main() 
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int Count;
    cin >> Count;

    int* Result = new int[Count];
    for (size_t i = 0; i < Count; i++)
    {
        int A, B;
        cin >> A >> B;

        Result[i] = A + B;
    }

    for (size_t i = 0; i < Count; i++)
        cout << Result[i] << '\n';

    cout.flush();

    return 0;
}