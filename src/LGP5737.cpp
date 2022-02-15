#include <cstdio>
using namespace std;
bool IsLeapYear(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return 1;
    return 0;
}
int main()
{
    freopen("LGP5737.in", "r", stdin);
    freopen("LGP5737.out", "w", stdout);
    int y1, y2, i, ans = 0;
    scanf("%d%d", &y1, &y2);
    for (i = y1; i <= y2; i++)
    {
        if (IsLeapYear(i) == 1)
            ans++;
    }
    printf("%d\n", ans);
    for (i = y1; i <= y2; i++)
    {
        if (IsLeapYear(i) == 1)
            printf("%d ", i);
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
