#include <iostream>

using namespace std;

int main() 
{
    int A, B, C;
    cin >> A >> B >> C;

    int Result;
    if (A == B && B == C)
    {
        Result = 10000 + A * 1000;
    }

    else if (A == B)
    {
        Result = 1000 + A * 100;
    }
    else if (B == C)
    {
        Result = 1000 + B * 100;
    }
    else if (A == C)
    {
        Result = 1000 + C * 100;
    }

    else if(A > B && A > C)
    {
        Result = A * 100;
    }
    else if (B > A && B > C)
    {
        Result = B * 100;
    }
    else if (C > A && C > B)
    {
        Result = C * 100;
    }

    cout << Result << endl;

    return 0;
}