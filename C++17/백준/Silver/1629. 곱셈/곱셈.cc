#include <iostream>

using namespace std;

long long power(long long a, long long b, long long c) 
{
    if (b == 0)
        return 1;

    long long half = power(a, b / 2, c);
    half = (half * half) % c;

    if (b % 2 == 0)
        return half;
    else
        return (half * a) % c;
}

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    cout << power(A, B, C) << "\n";
    return 0;
}