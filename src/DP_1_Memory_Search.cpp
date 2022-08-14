#include <iostream>

int a[101][101], d[101][101];

int n;

int Solution(int, int);

int main()
{
	using namespace std;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "Max sum: " << Solution(1, 1) << endl;
	return 0;
}

// ! IMPORTANT !!!
/*
Like this:
    1
    3 2
    4 10 1
    4 3 2 20
    Go from first layer to last layer
Output:
    The max of the sum of every step
*/
int Solution(int i, int j)
{
	using namespace std;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			// Edge situation
			d[i][j] = -1;
		}
	}
	if(i == n)
	{
		return a[i][j];
	}
	if (d[i][j] >= 0)
	{
		return d[i][j];
	}
	d[i][j] = a[i][j] + max(Solution(i + 1, j), Solution(i + 1, j + 1));
	return d[i][j];
}
// ! PAY ATTENTION TO FUNCTION 'Solution()' !!!
