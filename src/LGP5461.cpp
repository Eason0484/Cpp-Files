#include <cstdio>
#include <iostream>
using namespace std;
int a[1025][1025];
void free(int n, int x, int y)
{
    if (n == 0)
        a[x][y] = 1;
    else
    {
        free(n - 1, x + (1 << n - 1), y);
        free(n - 1, x, y + (1 << n - 1));
        free(n - 1, x + (1 << n - 1), y + (1 << n - 1));
    }
}
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= 1 << n; i++)
    {
        for (j = 1; j <= 1 << n; j++)
        {
            a[i][j] = 0;
        }
    }
    free(n, 1, 1);
    for (i = 1; i <= 1 << n; i++)
    {
        for (j = 1; j <= 1 << n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
