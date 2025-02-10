#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int Count = 1;
    int Max = 1;
    int Add = 0;
    while (true)
    {
        if (N <= Max)
            break;

        Count++;
        Add += 6;
        Max += Add;
    }

    cout << Count << "\n";
    return 0;
}