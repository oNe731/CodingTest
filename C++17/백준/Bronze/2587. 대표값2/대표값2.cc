#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::vector<int> Num(5);
    for (int i = 0; i < 5; ++i)
        cin >> Num[i];

    sort(Num.begin(), Num.end());

    int Sum = 0;
    for (int i = 0; i < 5; ++i)
        Sum += Num[i];
    Sum /= 5;

    cout << Sum << "\n";
    cout << Num[2] << "\n";

    return 0;
}