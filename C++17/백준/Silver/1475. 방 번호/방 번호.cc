#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Count = 0;
    std::array<int, 10> Result = {0};

    int Input;
    cin >> Input;

    while (Input != 0)
    {
        int Num = Input % 10;
        Input /= 10;
        Result[Num]++;
    }
    Result[6] = Result[9] = round((Result[6] + Result[9]) / 2.f);

    int Max = 0;
    for (auto iter = Result.begin(); iter != Result.end(); iter++)
    {
        if ((*iter) > Max)
            Max = (*iter);
    }

    cout << Max << "\n";
    return 0;
}