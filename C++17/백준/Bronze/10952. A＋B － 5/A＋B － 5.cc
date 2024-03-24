#include <iostream>

using namespace std;

int main() 
{
    while (true)
    {
        int A, B, C;
        cin >> A >> B;

        C = A + B;
        if (C == 0)
            return 0;

        cout << C << endl;
    }

    return 0;
}