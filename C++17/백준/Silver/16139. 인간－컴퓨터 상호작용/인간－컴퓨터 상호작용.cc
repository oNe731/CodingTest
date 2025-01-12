#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string String;
    cin >> String;
    int Count;
    cin >> Count;

    vector<int> Result(Count);
    for (size_t i = 0; i < Count; i++)
    {
        char Char;
        int I, L;
        cin >> Char >> I >> L;

        int ResultCount = 0;
        for (size_t j = I; j <= L; j++)
        {
            if (String[j] == Char)
                ResultCount++;
        }
        Result[i] = ResultCount;
    }

    for (size_t i = 0; i < Count; i++)
        cout << Result[i] << "\n";
    return 0;
}