#include <iostream>

using namespace std;

int main(void) {

    int InputCount;
    cin >> InputCount;

    int Count = 0;
    for (int i = 0; i < InputCount; ++i)
    {
        int Number;
        cin >> Number;

        if (Number == 1)
            continue;

        Count++;
        for (int j = 2; j < Number; ++j)
        {
            if (Number % j == 0)
            {
                Count--;
                break;
            }
        }
    }

    cout << Count << "\n";
    return 0;
}