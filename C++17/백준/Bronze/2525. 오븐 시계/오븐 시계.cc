#include <iostream>

using namespace std;

int main() 
{
    int H, M, U;
    cin >> H >> M >> U;

    int A = (((H + 24) * 60) + M) + U;
    H = A / 60;
    M = A % 60;

    int B = H - 24;
    if (B < 0)
        B += 24;
    else if (B >= 24)
        B -= 24;

    cout << B << " " << M << endl;

    return 0;
}