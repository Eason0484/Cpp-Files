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
        for (int j = wt[i]; j <= v; j++)
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
10 4
2 1
3 3
4 5
7 9
Output:
12
*/
