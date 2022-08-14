// The same as ./DP_2.cpp
// But show the subsequence
// TODO: Correct it

#include <iostream>

int n, max1, f, maxk;
int dp[101], a[101];
bool c[101], r[101];

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
//		dp[i] = max(a[i], dp[i - 1] + a[i]);
		if (dp[i - 1] > 0)
		{
			dp[i] = a[i];
			c[i] = 1;
		}
		else
		{
			dp[i] = dp[i - 1] + a[i];
			c[i] = 0;
		}
	}
	for (int i = 1; i < n; i++)
	{
		if (dp[i] > max1)
		{
			max1 = dp[i];
			maxk = i;
		}
	}
	for (int i = maxk; ; i--)
	{
		if(c[i] == 0)
		{
			r[f] = dp[i];
			break;
		}
		else
		{
			r[f++] = a[i];
		}
	}
	for (int i = f; i >= 0; i--)
	{
		cout << r[i] << " ";
	}
	cout << endl << max1 << endl;
}
