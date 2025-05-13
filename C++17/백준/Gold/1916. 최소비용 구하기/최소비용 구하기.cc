#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

vector<pair<int, int>> Graph[1001];
int Costs[1001];

int main() {
    int N, M;
    cin >> N >> M;

    for (size_t i = 0; i < M; i++)
    {
        int Start, End, Cost;
        cin >> Start >> End >> Cost;

        Graph[Start].push_back({ End, Cost});
    }
    int Start, End;
    cin >> Start >> End;

    for (size_t i = 1; i <= N; i++)
        Costs[i] = INT_MAX;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> Queue;
    Queue.push({ 0, Start });

    while (Queue.empty() == false)
    {
        int Cost = Queue.top().first;
        int Index = Queue.top().second;
        Queue.pop();

        if (Costs[Index] < Cost)
            continue;

        for (auto iter : Graph[Index])
        {
            int NextIndex = iter.first;
            int NextCost = iter.second;

            int NewCost = Cost + NextCost;
            if (Costs[NextIndex] > NewCost)
            {
                Costs[NextIndex] = NewCost;
                Queue.push({ NewCost, NextIndex });
            }
        }
    }

    cout << Costs[End] << "\n";
    return 0;
}