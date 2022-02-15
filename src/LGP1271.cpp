#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int i, tmp, m, n, j, box[1010] = {0};
    scanf("%d%d", &n, &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &tmp);
        box[tmp]++;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < box[i]; j++)
            printf("%d ", i);
    }
    return 0;
}
