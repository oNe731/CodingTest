#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    std::vector<int> newXs, newYs;
    for (int i = 0; i < 3; ++i)
    {
        int x, y;
        cin >> x >> y;
        newXs.push_back(x);
        newYs.push_back(y);
    }

    int newX, newY;
    if (newXs[0] == newXs[1])
        newX = newXs[2];
    else if (newXs[0] == newXs[2])
        newX = newXs[1];
    else
        newX = newXs[0];

    if (newYs[0] == newYs[1])
        newY = newYs[2];
    else if (newYs[0] == newYs[2])
        newY = newYs[1];
    else
        newY = newYs[0];

    cout << newX << " " << newY << "\n";
    return 0;
}