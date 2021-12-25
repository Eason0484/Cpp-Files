#include <iostream>
using namespace std;
int Cnt(int);
int main()
{
	int input;
	cin >> input;
	system("cls");
	int ans = Cnt(input);
	cout << ans << endl;
	system("pause");
	return 0;
}
int Cnt(int n)
{
	int f[1001][2];
	f[1][0] = 9;
	f[1][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		int k = 9;
		if (n == i)
		{
			k = 8;
		}
		f[i][0] = (f[i - 1][0] * k + f[i - 1][1]) % 12345;
		f[i][1] = (f[i - 1][0] + f[i - 1][1] * k) % 12345;
	}
	return f[n][0];
}
