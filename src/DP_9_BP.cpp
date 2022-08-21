#include <cmath>
#include <iostream>

int dp[101], power[101];
int mkCnt, sum, avgPw, pw1, pw2;

void Solution();
void CalcAveragePower();

int main()
{
    using namespace std;
    cin >> mkCnt;
    for (int i = 1; i <= mkCnt; i++)
    {
        cin >> power[i];
    }
    CalcAveragePower();
    Solution();
    return 0;
}

void CalcAveragePower()
{
    sum = 0;
    for (int i = 1; i <= mkCnt; i++)
    {
        sum += power[i];
    }
    avgPw = sum / 2;
}

void Solution()
{
    using namespace std;
    for (int i = 1; i <= mkCnt; i++)
    {
        for (int j = avgPw; j >= power[i]; j--)
        {
            dp[i] = max(dp[j - power[i]] + power[i], dp[j]);
        }
    }
    cout << sum - 2 * dp[avgPw] << endl;
}

/*
Input:
3
1 2 5
Output:
2
*/
