#include <iostream>

using namespace std;
#define rep(k) for (int k = 1; k <= n; k++)

void Solution();

int a[101][101], dp[101][101][101][101];
int x1, y1, num, n;

int main()
{
    cin >> n;
    while (true)
    {
        cin >> x1 >> y1 >> num;
        if (x1 == y1 && y1 == num && num == 0)
        {
            break;
        }
        a[x1][y1] = num;
    }
    Solution();
    return 0;
}

void Solution()
{
    rep(i) rep(j) rep(k) rep(l)
    {
        dp[i][j][k][l] = max(max(dp[i - 1][j][k - 1][l], dp[i - 1][j][k][l - 1]), max(dp[i][j - 1][k - 1][l],
                                                                                      dp[i][j - 1][k][l - 1])) +
                         a[i][j] + a[k][l];
        if (i == k && j == l)
        {
            dp[i][j][k][l] -= a[i][j];
        }
    }
    cout << dp[n][n][n][n] << endl;
}

/*
8
2 3 13
2 6 6
3 5 7
4 4 14
5 2 21
5 6 4
6 3 15
7 2 14
0 0 0
*/
