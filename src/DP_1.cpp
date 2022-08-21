#include <iostream>

int a[101][101], d[101][101];

int n;

void Solution();

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
    Solution();
    cout << "Max sum: " << d[1][1] << endl;
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
void Solution()
{
    using namespace std;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // Edge situation
            d[i][j] = a[i][j];
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            d[i][j] = a[i][j] + max(d[i + 1][j], d[i + 1][j + 1]);
        }
    }
}
// ! PAY ATTENTION TO FUNCTION 'Solution()' !!!
