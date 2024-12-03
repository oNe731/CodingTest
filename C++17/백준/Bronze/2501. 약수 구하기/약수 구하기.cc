#include <iostream>

using namespace std;

int main(void) {

    int A, B;
    cin >> A >> B;

    int value = 0;
    for(int i = 1; i <= A; ++i)
    {
        if (A % i == 0)
        {
            value++;
            if (value >= B)
            {
                value = i;
                break;
            }
        }
    }

    if (value < B)
        value = 0;
    cout << value << "\n";
    return 0;
}