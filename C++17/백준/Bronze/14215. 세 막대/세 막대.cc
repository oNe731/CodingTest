#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std:vector<int> Numbers(3);
    cin >> Numbers[0] >> Numbers[1] >> Numbers[2];
    sort(Numbers.begin(), Numbers.end(), greater<int>());

    if (Numbers[0] < Numbers[1] + Numbers[2]) // 삼각형 구성 가능
        cout << Numbers[0] + Numbers[1] + Numbers[2] << "\n";
    else// 최대 둘레 값
        cout << Numbers[1] + Numbers[2] + (Numbers[1] + Numbers[2] - 1) << "\n";
    return 0;
}