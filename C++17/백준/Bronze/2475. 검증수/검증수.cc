#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> Input(5);
    cin >> Input[0] >> Input[1] >> Input[2] >> Input[3] >> Input[4];

    int Sum = 0;
    for (size_t i = 0; i < 5; i++)
    {
        Input[i] *= Input[i];
        Sum += Input[i];
    }

    cout << Sum % 10 << "\n";
    return 0;
}