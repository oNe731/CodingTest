#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<vector<int>> Map;
vector<vector<bool>> Visited;
int Mx[4] = { -1, 1, 0, 0 };
int My[4] = { 0, 0, -1, 1 };

void DFS(int X, int Y, int Size, int& Count)
{
    Visited[X][Y] = true;
    Count++;
    for (size_t i = 0; i < 4; i++)
    {
        int Nx = X + Mx[i];
        int Ny = Y + My[i];

        if (Nx < 0 || Nx >= Size || Ny < 0 || Ny >= Size)
            continue;

        if (Map[Nx][Ny] == 1 && Visited[Nx][Ny] == false)
        {
            DFS(Nx, Ny, Size, Count);
        }
    }
}

int main() {
    int N;
    cin >> N;

    Map.resize(N, vector<int>(N));
    Visited.resize(N, vector<bool>(N, false));
    for (size_t i = 0; i < N; i++)
    {
        string Input;
        cin >> Input;
        for (size_t j = 0; j < Input.length(); j++)
            Map[i][j] = Input[j] - '0';
    }

    int Count = 0;
    vector<int> House;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            if (Map[i][j] == 1 && Visited[i][j] == false)
            {
                Count++;

                int Houses = 0;
                DFS(i, j, N, Houses);
                House.push_back(Houses);
            }
        }
    }

    cout << Count << "\n";
    sort(House.begin(), House.end());
    for (auto iter : House)
        cout << iter << "\n";

    return 0;
}