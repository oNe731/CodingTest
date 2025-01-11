#include <iostream>
#include <map>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<string, int> Words;
    for (size_t i = 0; i < N; i++)
    {
        string Word;
        cin >> Word;

        if(Word.size() >= M)
            Words[Word]++;
    }

    vector<pair<string, int>> WordVectors(Words.begin(), Words.end());
    sort(WordVectors.begin(), WordVectors.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second != b.second)
            return a.second > b.second;
        else if (a.first.size() != b.first.size())
            return a.first.size() > b.first.size();
        else
            return strcmp(a.first.c_str(), b.first.c_str()) < 0;
        });

    for (size_t i = 0; i < WordVectors.size(); i++)
        cout << WordVectors[i].first << "\n";

    return 0;
}