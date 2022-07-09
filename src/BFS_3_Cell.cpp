#include <iostream>
#include <queue>

using namespace std;

int map[101][101];
int m, n;
bool v[101];
queue<int> que;
void BFS();

int main(int argc, char **)
{
    using namespace std;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> map[i][j];
        }
    }
    BFS();
    cout << "\n请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

void BFS()
{
}
