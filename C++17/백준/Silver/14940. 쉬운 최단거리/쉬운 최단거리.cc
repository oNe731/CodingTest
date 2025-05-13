#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> Numbers(N, vector<int>());
    vector<vector<int>> Dist(N, vector<int>(M, -1));
    int MN[4]{ 1, -1, 0, 0 };
    int MM[4]{ 0, 0, 1, -1 };

    int StartN, StartM;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            int Number;
            cin >> Number;
            Numbers[i].push_back(Number);

            if (Number == 2)
            {
                StartN = i;
                StartM = j;
            }
        }
    }

    queue<pair<int, int>> Queue;
    Queue.push({ StartN, StartM });
    Dist[StartN][StartM] = 0;

    while (Queue.empty() == false)
    {
        int FN = Queue.front().first;
        int FM = Queue.front().second;
        Queue.pop();

        for (size_t i = 0; i < 4; i++)
        {
            int NN = FN + MN[i];
            int NM = FM + MM[i];
            if (NN < 0 || NN >= N || NM < 0 || NM >= M)
                continue;

            if (Numbers[NN][NM] == 1 && Dist[NN][NM] == -1)
            {
                Dist[NN][NM] = Dist[FN][FM] + 1;
                Queue.push({ NN, NM });
            }
        }
    }

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            if(Numbers[i][j] == 0)
                cout << "0" << " ";
            else
                cout << Dist[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}