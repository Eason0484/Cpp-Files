// The same as ./DP_1.cpp
// But showed the path

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
    return 0;
}

void Solution()
{
    using namespace std;
    // Add 'path[]' to record the path
    bool path[101][101];
    int maxNum;
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
            // max(d[i + 1][j], d[i + 1][j + 1]) -> 'if'
            if (d[i + 1][j] > d[i + 1][j + 1])
            {
                maxNum = d[i + 1][j];
                path[i][j] = 0;
            }
            else
            {
                maxNum = d[i + 1][j + 1];
                path[i][j] = 1;
            }
            d[i][j] = a[i][j] + maxNum;
        }
    }
    cout << "Max sum: " << d[1][1];
    cout << "\nPath: ";
    int y = 1;
    for (int x = 1; x <= n - 1; x++)
    {
        cout << a[x][y] << " -> ";
        y = y + path[x][y];
    }
    cout << a[n][y];
}
