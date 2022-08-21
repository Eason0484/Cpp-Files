#include <iostream>

int dp[101] = {}, wt[101], vl[101];
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
        for (int j = v; j >= wt[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - wt[i]] + vl[i]);
        }
    }
    cout << "dp[i]:\n";
    for (int i = 1; i <= v; i++)
    {
        cout << dp[i] << " ";
    }
    cout << "\nAnswer: " << dp[v] << endl;
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
