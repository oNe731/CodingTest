#include <iostream>

using namespace std;

int main() 
{
    int A;
    cin >> A;

    for (size_t i = 1; i < 10; i++)
        cout << A << " * " << i << " = " << A * i << endl;

    return 0;
}