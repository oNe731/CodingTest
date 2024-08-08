#include <iostream>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    int Result = 0;
    for (size_t i = 0; i < N + 1; i++)
        Result += i;

    cout << Result << endl;

    return 0;
}