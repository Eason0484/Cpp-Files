#include <iostream>
#include <queue>

struct Node
{
    int x;
    int y;
    int step;
};

int col, row, ans = 0;

int map[100][100], visited[100][100];
int np[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void BFS(int x, int y);

int main()
{
    using namespace std;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> map[i][j];
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if ((i == 1 || i == 10 || j == 1 || j == 10) && map[i][j] == 0 && !visited[i][j])
            {
                BFS(i, j);
            }
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (map[i][j] == 0 && !visited[i][j])
            {
                BFS(i, j);
            }
        }
    }
    cout << ans << "\n请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

void BFS(int x, int y)
{
    using namespace std;
    queue<Node> que;
    Node sn;
    sn.x = x;
    sn.y = y;
    visited[x][y] = true;
    que.push(sn);
    ans++;
    while (!que.empty())
    {
        for (int i = 0; i < 4; i++)
        {
            int nx = que.front().x + np[i][0];
            int ny = que.front().y + np[i][1];
            if (nx >= 0 && nx < col && ny >= 0 && ny < row && map[nx][ny] == 1 && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                Node newNode;
                newNode.x = nx;
                newNode.y = ny;
                que.push(newNode);
            }
        }
        que.pop();
    }
}
