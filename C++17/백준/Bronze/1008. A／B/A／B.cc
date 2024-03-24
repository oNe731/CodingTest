#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int A, B;
    double Result;

    cin >> A >> B;
    Result = static_cast<double>(A) / static_cast<double>(B);

    cout.precision(32);
    cout << Result << endl;

    return 0;
}