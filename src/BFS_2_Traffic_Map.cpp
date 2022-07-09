#include <iostream>
#include <queue>

using namespace std;

int a[101];
bool v[101];
queue<int> que;
void BFS();

int map[9][9] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 0, 1, 1},
    {0, 0, 1, 1, 1, 1, 0, 1, 1},
    {0, 0, 1, 1, 0, 0, 1, 1, 1},
    {0, 0, 1, 0, 1, 1, 1, 0, 1},
    {0, 1, 1, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 1, 0, 0, 1, 1, 0},
    {0, 1, 1, 1, 1, 0, 0, 0, 1},
};

int main(int argc, char **)
{
    int k = 0;
    BFS();
    cout << char(k + 64);
    while (a[k])
    {
        cout << "-" << char(a[k] + 64);
        k = a[k];
    }
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

void BFS()
{
    que.push(1);
    v[1] = true;
    while (!que.empty())
    {
        int cur = que.front();
        for (int i = 1; i <= 8; i++)
        {
            if (map[cur][i] == 0 && !v[i])
            {
                v[i] = true;
                que.push(i);
                a[i] = cur;
            }
        }
        que.pop();
    }
}
