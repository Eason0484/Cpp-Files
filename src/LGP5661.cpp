#include <iostream>
using namespace std;
const int tool = 1, price = 2, time = 3;
int main()
{
    freopen("LGP5661.in", "r", stdin);
    freopen("LGP5661.out", "w", stdout);
    int a[4], tmp[4], i, ticket = 0, n, j, ans = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 3; j++)
            cin >> a[j];
        if (i == 1)
        {
            if (a[tool] == 0)
                ticket++;
            ans += a[price];
            for (j = 1; j <= 3; j++)
                tmp[j] = a[j];
            continue;
        }
        if (a[tool] == 0)
        {
            ticket++;
            ans += a[price];
        }
        if (a[tool] == 1)
        {
            if (ticket == 0)
                ans += a[price];
            if (a[time] - tmp[time] <= 45 && ticket >= 1)
                ticket--;
            if (a[time] - tmp[time] > 45 && ticket >= 1)
            {
                ticket = 0;
                ans += a[price];
            }
        }
        for (j = 1; j <= 3; j++)
            tmp[j] = a[j];
    }
    cout << ans << endl;
    system("pause");
    fclose(stdin);
    fclose(stdout);
    return 0;
}
