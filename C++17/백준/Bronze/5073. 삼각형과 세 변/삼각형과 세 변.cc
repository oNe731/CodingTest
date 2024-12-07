#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    while (true)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A == 0 && B == 0 && C == 0)
            break;

        int MaxNum = std::max({ A, B, C });
        int AddNum;

        if (MaxNum == A)
            AddNum = B + C;
        else if (MaxNum == B)
            AddNum = A + C;
        else if (MaxNum == C)
            AddNum = A + B;

        if (MaxNum >= AddNum)
            cout << "Invalid" << "\n";
        else
        {
            if (A == B && B == C)
                cout << "Equilateral" << "\n";
            else if (A == B || B == C || A == C)
                cout << "Isosceles" << "\n";
            else
                cout << "Scalene" << "\n";
        }
    }

    return 0;
}