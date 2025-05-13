#include <iostream>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

int main() {
    int V, E, K;
    cin >> V >> E >> K;

    vector<pair<int, int>> Graph[20001];
    int Dist[20001];

    for (size_t i = 0; i < E; i++)
    {
        int U, V, W;
        cin >> U >> V >> W;
        Graph[U].push_back({V, W});
    }
    for (size_t i = 1; i <= V; i++)
        Dist[i] = INT_MAX;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Queue;
    Queue.push({0, K});
    Dist[K] = 0;

    while (Queue.empty() == false)
    {
        int Weight = Queue.top().first;
        int Index = Queue.top().second;
        Queue.pop();

        for (auto iter : Graph[Index])
        {
            int Next = iter.first;
            int NextWeight = iter.second;
            if (Dist[Next] > Weight + NextWeight)
            {
                Dist[Next] = Weight + NextWeight;
                Queue.push({ Dist[Next], Next });
            }
        }
    }

    for (size_t i = 1; i <= V; i++)
    {
        if(Dist[i] != INT_MAX)
            cout << Dist[i] << "\n";
        else
            cout << "INF" << "\n";
    }

    return 0;
}