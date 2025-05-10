#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

const int MaxCount = 10001;
vector<int> Graph[MaxCount];

bool VisitedDFS[MaxCount] = { false };
void DFS(int V)
{
    VisitedDFS[V] = true;
    cout << V << ' ';
    for (auto iter : Graph[V])
    {
        if (VisitedDFS[iter] == false)
        {
            VisitedDFS[iter] = true;
            DFS(iter);
        }
    }
}

void BFS(int V)
{
    queue<int> Queue;
    bool VisitedBFS[MaxCount] = { false };

    Queue.push(V);
    VisitedBFS[V] = true;

    while (Queue.empty() == false)
    {
        int front = Queue.front();
        Queue.pop();
        cout << front << ' ';

        for (auto iter : Graph[front])
        {
            if (VisitedBFS[iter] == false)
            {
                VisitedBFS[iter] = true;
                Queue.push(iter);
            }
        }
    }
}

int main() 
{
    int N, M, V;
    cin >> N >> M >> V;

    for (size_t i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;

        Graph[A].push_back(B);
        Graph[B].push_back(A);
    }

    for (size_t i = 1; i <= N; i++)
        sort(Graph[i].begin(), Graph[i].end());

    DFS(V);
    cout << "\n";
    BFS(V);

    return 0;
}