// Longest Common Subsequence, LCS

#include <cstring>
#include <iostream>

using namespace std;
string strA, strB;
int dp[101][101];
int lenA, lenB;

void Solution();

int main()
{
    cin >> strA >> strB;
    strA = ' ' + strA;
    strB = ' ' + strB;
    lenA = strA.length() - 1;
    lenB = strB.length() - 1;
    Solution();
    cout << dp[lenA][lenB] << endl;
    return 0;
}

void Solution()
{
    for (int i = 0; i <= lenA; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= lenB; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= lenA; i++)
    {
        for (int j = 1; j <= lenB; j++)
        {
            if (strA[i] == strB[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
}
