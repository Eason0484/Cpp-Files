#include <iostream>
using namespace std;
long long ways(long long);
int main()
{
	long long input;
	cin >> input;
	system("cls");
	long long ans = ways(input);
	cout << ans << endl;
	system("pause");
	return 0;
}
long long ways(long long n)
{
	switch (n)
	{
	case 1:
	{
		return 1;
		break;
	}
	case 2:
	{
		return 2;
		break;
	}
	default:
	{
//		long long ans = 0;
//		for (long long i = 1; i < n; i++)
//		{
//			ans += ways(i);
//		}
//		return ans;
		return ways(n - 1) + ways(n - 2);
		break;
	}
	}
}
