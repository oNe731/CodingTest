#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int InputN, InputK;
    cin >> InputN >> InputK;

    int Numerator = 1;
    for (int i = InputN; i > 0; --i)
        Numerator *= i;

    int DenominatorA = 1;
    for (int i = InputK; i > 0; --i)
        DenominatorA *= i;

    int InputZ = InputN - InputK;
    int DenominatorB = 1;
    for (int i = InputZ; i > 0; --i)
        DenominatorB *= i;

    int Denominator = DenominatorA * DenominatorB;
    int Result = Numerator / Denominator;

    cout << Result << "\n";
    return 0;
}