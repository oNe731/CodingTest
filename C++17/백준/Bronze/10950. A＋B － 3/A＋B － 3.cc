#include <iostream>

using namespace std;

int main() 
{
    int Case;
    cin >> Case;

    int* Result = new int[Case];
    for (size_t i = 0; i < Case; i++)
    {
        int A, B;
        cin >> A >> B;
        Result[i] = A + B;
    }

    for (size_t i = 0; i < Case; i++)
        cout << Result[i] << endl;

    delete[] Result;
    return 0;
}