#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    int Count;
    cin >> Count;
    if (Count <= 1)
    {
        cout << 0 << "\n";
        return 0;
    }
    
    std::vector<int> NumberXs;
    std::vector<int> NumberYs;
    for (int i = 0; i < Count; ++i)
    {
        int X, Y;
        cin >> X >> Y;

        NumberXs.push_back(X);
        NumberYs.push_back(Y);
    }

    auto XMin = std::min_element(NumberXs.begin(), NumberXs.end());
    auto YMin = std::min_element(NumberYs.begin(), NumberYs.end());

    auto XMax = std::max_element(NumberXs.begin(), NumberXs.end());
    auto YMax = std::max_element(NumberYs.begin(), NumberYs.end());

    int XValue = *XMin - *XMax;
    XValue = std::abs(XValue);
    int YValue = *YMin - *YMax;
    YValue = std::abs(YValue);

    cout << XValue * YValue << "\n";

    return 0;
}