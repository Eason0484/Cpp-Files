#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int x;
    int y;
    int step;
};
int a[101][101];
bool book[101][101];
char s[101];

int n, m, ans;
int np[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void BFS(int x, int y);

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin.getline(s, 101);
        for (int j = 0; j < m; j++)
        {
            if (s[j] != '0')
            {
                a[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1 && !book[i])
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
    queue<Node> que;
    Node sn;
    sn.x = x;
    sn.y = y;
    book[x][y] = true;
    que.push(sn);
    ans++;
    while (!que.empty())
    {
        for (int i = 0; i < 4; i++)
        {
            int nx = que.front().x + np[i][0];
            int ny = que.front().y + np[i][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 1 && !book[nx][ny])
            {
                book[nx][ny] = true;
                Node newNode;
                newNode.x = nx;
                newNode.y = ny;
                que.push(newNode);
            }
        }
        que.pop();
    }
}
