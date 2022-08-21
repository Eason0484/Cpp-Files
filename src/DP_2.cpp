// Maximum Continuous Subsequence Sum Problem
// Like this:
//     In sequence {-2, 11, -4, 13, -5, -2}
//     The maximum continuous subsequence is {11, -4, 13}
//     The maximum continuous subsequence sum is 20
#include <iostream>

int n, max1;
int dp[101], a[101];

void Solution();

int main()
{
    using namespace std;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Solution();
    cout << max1 << endl;
    return 0;
}

void Solution()
{
    using namespace std;
    dp[0] = a[0]; // Edge situation
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(a[i], dp[i - 1] + a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (dp[i] > max1)
        {
            max1 = dp[i];
        }
    }
}
