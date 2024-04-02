#include <iostream>

using namespace std;

int main() 
{
    int Number;
    cin >> Number;

    char* chr = new char[Number];
    for (size_t i = 0; i < Number; i++)
        cin >> chr[i];

    int Sum = 0;
    for (size_t i = 0; i < Number; i++)
        Sum += chr[i] - '0';

    cout << Sum;

    return 0;
}