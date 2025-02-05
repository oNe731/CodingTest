#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> Result(N);
    
    for (size_t i = 0; i < N; i++)
    {
        string Str;
        cin >> Str;

        int Score = 0;
        int Add = 0;
        for (size_t j = 0; j < Str.size(); j++)
        {
            if (Str[j] == 'O')
                Add++;
            else
                Add = 0;
            Score += Add;
        }
        Result[i] = Score;
    }

    for (size_t i = 0; i < N; i++)
        cout << Result[i] << "\n";
    return 0;
}