#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
int map[6][6];                            //地图；
bool temp[6][6];                          //走过的标记；
int dx[4] = {0, 0, 1, -1};                //打表；
int dy[4] = {-1, 1, 0, 0};                //打表；
int total, fx, fy, sx, sy, T, n, m, l, r; // total计数器，fx，fy是终点坐标，sx，sy是起点坐标，T是障碍总数，n，m是地图的长和宽，l，r是障碍的横坐标和纵坐标；
void DFS(int x, int y)                    //定义DFS；
{
    if (x == fx && y == fy) // fx表示结束x坐标，fy表示结束y坐标；
    {
        total++; //总数增加；
        return;  //返回，继续搜索；
    }
    else
    {
        for (int i = 0; i <= 3; i++) // 0——3是左，右，下，上四个方向；
        {
            if (temp[x + dx[i]][y + dy[i]] == 0 && map[x + dx[i]][y + dy[i]] == 1) //判断没有走过和没有障碍；
            {
                temp[x][y] = 1; //走过的地方打上标记；
                DFS(x + dx[i], y + dy[i]);
                temp[x][y] = 0; //还原状态；
            }
        }
    }
}
int main()
{
    using namespace std;
    cin >> n >> m >> T; // n，m长度宽度，T障碍个数
    for (int ix = 1; ix <= n; ix++)
        for (int iy = 1; iy <= m; iy++)
            map[ix][iy] = 1; //把地图刷成1；
    cin >> sx >> sy;         //起始x，y
    cin >> fx >> fy;         //结束x，y
    for (int u = 1; u <= T; u++)
    {
        cin >> l >> r; // l，r是障碍坐标；
        map[l][r] = 0;
    }
    DFS(sx, sy);
    cout << total << endl; //输出总数；
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
