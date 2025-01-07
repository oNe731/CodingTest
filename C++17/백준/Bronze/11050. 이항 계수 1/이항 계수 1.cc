#include <iostream>

using namespace std;

int factorial(int n)
{
    int Result = 1;
    for (int i = n; i > 0; --i)
        Result *= i;

    return Result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int InputN, InputK;
    cin >> InputN >> InputK;

    cout << factorial(InputN) / (factorial(InputK) * factorial(InputN - InputK)) << "\n";
    return 0;
}