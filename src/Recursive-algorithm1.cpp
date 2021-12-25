#include <iostream>
using namespace std;
long long f(long);
int main()
{
	int input;
	cin >> input;
	system("cls");
	int ans = f(input);
	cout << ans << endl;
	system("pause");
	return 0;
}
long long f(long n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return f(n - 1) + f(n - 2);
	}
}
