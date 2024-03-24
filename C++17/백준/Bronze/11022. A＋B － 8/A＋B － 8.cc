#include <iostream>

using namespace std;

int main() 
{
    int Count;
    cin >> Count;

    for (size_t i = 1; i < Count + 1; i++)
    {
        int A, B;
        cin >> A >> B;
        cout << "Case " << "#" <<i << ": " << A << " + " << B << " = " << A + B << endl;
    }

    return 0;
}