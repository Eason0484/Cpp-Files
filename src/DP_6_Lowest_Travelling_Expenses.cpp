#include <cstring>
#include <iostream>

int dp[101][101], n, a[101][101];

void Solution();

int main()
{
    using namespace std;
    cin >> n;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
        }
    }
    Solution();
    return 0;
}

void Solution()
{
    using namespace std;
    memset(dp, 0x3F, sizeof(dp));
    dp[1][1] = a[1][1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1)
            {
                continue;
            }
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }
    cout << dp[n][n] << endl;
}

/*
5
1 4 6 8 10
2 5 7 15 17
6 8 9 18 20
10 11 12 19 21
20 23 25 29 33
*/
