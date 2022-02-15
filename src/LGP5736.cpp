#include <cstdio>
using namespace std;
bool p(int a)
{
    int i;
    if (a == 1 || a == 0)
        return 0;
    for (i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    freopen("LGP5736.in", "r", stdin);
    freopen("LGP5736.out", "w", stdout);
    int i, a[101], n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i <= n; i++)
    {
        if (p(a[i]) == 1)
            printf("%d ", a[i]);
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
