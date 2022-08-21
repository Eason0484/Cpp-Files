#include <iostream>

int dp[101][101] = {0};
int sx, sy, ex, ey;
int n, m;

void Solution();

int main()
{
    using namespace std;
    cin >> n >> m;
    cin >> sx >> sy >> ex >> ey;
    Solution();
    return 0;
}

void Solution()
{
    using namespace std;
    dp[sx][sy] = 1;
    for (int i = sx + 1; i <= ex; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j + 1 <= m && i - 2 >= 1)
            {
                dp[i][j] += dp[i - 2][j + 1];
            }
            if (j + 2 <= m && i - 1 >= 0)
            {
                dp[i][j] += dp[i - 1][j + 2];
            }
            if (j - 1 >= 1 && i - 2 >= 1)
            {
                dp[i][j] += dp[i - 2][j - 1];
            }
            if (j - 2 >= 1 && i - 1 >= 0)
            {
                dp[i][j] += dp[i - 1][j - 2];
            }
        }
    }
    cout << dp[ex][ey] << endl;
}

/*
30 30
1 15 3 15
*/
