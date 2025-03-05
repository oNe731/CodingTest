#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    std::array<int, 26> Result = {0};

    string Input;
    cin >> Input;
    for (size_t i = 0; i < Input.size(); i++)
    {
        int Num = Input[i] - 97;
        Result[Num]++;
    }

    for (size_t i = 0; i < Result.size(); i++)
        cout << Result[i] << " ";
    cout << "\n";

    return 0;
}