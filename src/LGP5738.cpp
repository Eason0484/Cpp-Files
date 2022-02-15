#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    freopen("LGP5738.in", "r", stdin);
    freopen("LGP5738.out", "w", stdout);
    int maxn, minn, a[21], i, j, n, sum;
    double score, m, maxscore = 0;
    scanf("%d%lf", &n, &m);
    for (i = 1; i <= n; i++)
    {
        maxn = 0;
        minn = 10;
        sum = 0;
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &a[j]);
            maxn = max(a[j], maxn);
            minn = min(a[j], minn);
        }
        for (j = 1; j <= m; j++)
            sum += a[j];
        score = ((sum - maxn - minn) / (m - 2));
        if (score >= maxscore)
            maxscore = score;
    }
    printf("%.2f\n", maxscore);
    fclose(stdin);
    fclose(stdout);
    system("pause");
    return 0;
}
