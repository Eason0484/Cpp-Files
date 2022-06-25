#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int x;
    int y;
    int step;
};
int map[101][101];
bool v[101][101];

int n, m;
int sx, sy, ex, ey;
bool flag = false;
int np[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
queue<Node> que;
void BFS();
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> map[i][j];
        }
    }
    cin >> sx >> sy >> ex >> ey;
    BFS();
    if (flag)
    {
        cout << que.back().step << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

void BFS()
{
    Node sn;
    sn.x = sx;
    sn.y = sy;
    sn.step = 0;
    v[sx][sy] = true;
    que.push(sn);
    while (!que.empty())
    {
        for (int i = 0; i < 4; i++)
        {
            int nx = que.front().x + np[i][0];
            int ny = que.front().y + np[i][0];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && v[nx][ny] == 0 && !v[nx][ny])
            {
                v[nx][ny] = true;
                Node newnode;
                newnode.x = nx;
                newnode.y = ny;
                newnode.step = que.front().step + 1;
                que.push(newnode);
            }
            if (nx == ex && ny == ey)
            {
                flag == true;
                return;
            }
        }
        que.pop();
    }
}
