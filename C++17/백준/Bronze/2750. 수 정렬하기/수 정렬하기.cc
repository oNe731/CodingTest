#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int Count;
    cin >> Count;

    std::vector<int> Numbers(Count);
    for (int i = 0; i < Count; ++i)
        cin >> Numbers[i];

    sort(Numbers.begin(), Numbers.end());
    for (int i = 0; i < Count; ++i)
        cout << Numbers[i] << "\n";
   
    return 0;
}