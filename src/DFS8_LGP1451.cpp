#include <iostream>
int m, n;
int cells[100][100], ans = 0;
bool visited[100][100];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void DFS(int, int);

int main(int argc, char **argv)
{
    using namespace std;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cells[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cells[i][j] == 0 && visited[i][j] == 1)
            {
                DFS(i, j);
                ans++;
            }
        }
    }
    cout << ans << "\n请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

void DFS(int stepM, int stepN)
{
    using namespace std;
    visited[stepM][stepN] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = stepM + dx[i];
        int ny = stepN + dy[i];
        if (cells[nx][ny] == 0 || visited[nx][ny] == 1)
        {
            continue;
        }
        DFS(nx, ny);
    }
}
