// Longest Increase Subsquence problem
// TODO: Correct it

#include <iostream>

int sq[101], _LISLength[101], f[101], p[101];
int n, max1, k, s, ans = 0;
bool check;

void Solution();

int main()
{
	using namespace std;
	cin >> n;
	sq[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> sq[i];
	}
	Solution();
	return 0;
}

void Solution()
{
	using namespace std;
	int max1 = 0;
	_LISLength[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (sq[j] < sq[i])
			{
				if (f[j] > max1)
				{
					max1 = f[j];
					k = j;
				}
			}
		}
		f[i] = max1 + 1;
		p[i] = k;
	}
	for (int i = 1; i <= n; i++)
	{
		if (f[i] > ans)
		{
			ans = f[i];
			s = i;
		}
	}
	cout << ans << endl;
	while (s != 0)
	{
		cout << a[s] << " ";
	}
	cout << endl;
}
