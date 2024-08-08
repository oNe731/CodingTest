#include <iostream>

using namespace std;

int main() 
{
    int Count[6] = {1, 1, 2, 2, 2, 8};
    int Input[6];
    int Result[6];

    cin >> Input[0] >> Input[1] >> Input[2] >> Input[3] >> Input[4] >> Input[5];

    for (int i = 0; i < 6; ++i)
        Result[i] = Count[i] - Input[i];

    for (int i = 0; i < 6; ++i)
        cout << Result[i] << " ";

    return 0;
}