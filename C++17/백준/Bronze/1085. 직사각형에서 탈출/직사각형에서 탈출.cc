#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout << min({ x, w - x, h - y, y }) << "\n";
  
    return 0;
}