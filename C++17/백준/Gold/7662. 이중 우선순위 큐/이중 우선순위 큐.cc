#include <iostream>
#include <set>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (size_t i = 0; i < T; i++)
    {
        int K;
        cin >> K;
        multiset<int> Number;

        for (size_t j = 0; j < K; j++)
        {
            char Char;
            int N;
            cin >> Char >> N;

            if (Char == 'I')
            {
                Number.insert(N);
            }
            else if (Char == 'D')
            {
                if (Number.empty() == true)
                    continue;
                if (N == 1)
                    Number.erase(prev(Number.end()));
                else if (N == -1)
                    Number.erase(Number.begin());
            }
        }

        if (Number.empty() == true)
            cout << "EMPTY" << "\n";
        else
            cout << *prev(Number.end()) << " " << *Number.begin() << "\n";
    }

    return 0;
}