#include <iostream>

using namespace std;

int main(void) {

    while (true)
    {
        int A, B;
        cin >> A >> B;
        if (A == B)
            break;

        if (B % A == 0)
            cout << "factor" << "\n";
        else if (A % B == 0)
            cout << "multiple" << "\n";
        else
            cout << "neither" << "\n";
    }

    return 0;
}