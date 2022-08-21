#include <iostream>

int dp[101][101], wt[101], vl[101];
int v, itmCnt;

void Solution();

int main()
{
    using namespace std;
    cin >> v >> itmCnt;
    for (int i = 1; i <= itmCnt; i++)
    {
        cin >> wt[i] >> vl[i];
    }
    Solution();
    return 0;
}

void Solution()
{
    using namespace std;
    for (int i = 1; i <= itmCnt; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (j >= wt[i])
            {
                dp[i][j] = dp[i - 1][j - wt[i]] + vl[i];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << "dp[i][j]:\n";
    for (int i = 1; i <= itmCnt; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Answer: " << dp[itmCnt][v] << endl;
}

/*
Input:
8 3
2 3
5 4
5 5
Output:
8
*/
