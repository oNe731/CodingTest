#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> Sizes(6);
    cin >> Sizes[0] >> Sizes[1] >> Sizes[2] >> Sizes[3] >> Sizes[4] >> Sizes[5];

    int T, P;
    cin >> T >> P;

    int Count = 0;
    for (size_t i = 0; i < Sizes.size(); i++)
    {
        int Num = (Sizes[i] / T);
        if (Sizes[i] % T != 0)
            Num += 1;
        Count += Num;
    }

    cout << Count << "\n";
    cout << N / P << " " << N % P << "\n";
    return 0;
}