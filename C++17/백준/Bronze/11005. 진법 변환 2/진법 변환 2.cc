#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, B;
    cin >> N >> B;

    string Result;

    int remainder = N;
    while (true)
    {
        int Num = remainder % B;
        if (Num < 10) // 숫자
            Result += to_string(Num);
        else // 알파벳
            Result += (char)(Num + 55);

        remainder /= B;
        if (remainder == 0)
            break;
    }

    reverse(Result.begin(), Result.end());
    cout << Result << "\n";
    return 0;
}