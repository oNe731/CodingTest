#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

vector<vector<int>> Miro;
vector<vector<bool>> Visited;
int Mx[4] = { -1, 1, 0, 0 }; 
int My[4] = { 0, 0, -1, 1 };

int main() {
    int N, M;
    cin >> N >> M;

    Miro.resize(N, vector<int>(M));
    Visited.resize(N, vector<bool>(M, false));
    for (size_t i = 0; i < N; i++)
    {
        string Input;
        cin >> Input;
        for (size_t j = 0; j < Input.length(); j++)
            Miro[i][j] = Input[j] - '0';
    }

    queue<pair<int, int>> Q;
    Q.push({ 0, 0 });
    Visited[0][0] == true;

    while (Q.empty() == false)
    {
        int Cx = Q.front().first;
        int Cy = Q.front().second;
        Q.pop();

        for (size_t i = 0; i < 4; i++)
        {
            int Nx = Cx + Mx[i];
            int Ny = Cy + My[i];

            if (Nx < 0 || Nx >= N || Ny < 0 || Ny >= M)
                continue;

            if (Miro[Nx][Ny] == 1 && Visited[Nx][Ny] == false)
            {
                Visited[Nx][Ny] = true;
                Miro[Nx][Ny] += Miro[Cx][Cy];
                Q.push({ Nx, Ny });
            }
        }
    }

    cout << Miro[N - 1][M - 1] << "\n";
    return 0;
}