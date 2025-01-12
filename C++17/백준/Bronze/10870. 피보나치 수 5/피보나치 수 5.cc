#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Number;
    cin >> Number;

    vector<int> Numbers;
    Numbers.push_back(0);
    Numbers.push_back(1);
    for (size_t i = 2; i <= Number; i++)
        Numbers.push_back(Numbers[i - 1] + Numbers[i - 2]);

    cout << Numbers[Number] << "\n";
    return 0;
}