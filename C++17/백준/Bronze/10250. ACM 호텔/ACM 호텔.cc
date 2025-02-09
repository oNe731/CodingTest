#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Count;
    cin >> Count;

    vector<int> Results(Count);
    for (size_t i = 0; i < Count; i++)
    {
        int H, W, N;
        cin >> H >> W >> N;

        int Count = 1;
        int Num = N;
        while (Num - H > 0)
        {
            Count++;
            Num -= H;
        }

        Results[i] = (Num * 100) + Count;
    }

    for (size_t i = 0; i < Results.size(); i++)
        cout << Results[i] << "\n";
    return 0;
}