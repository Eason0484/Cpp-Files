#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    // freopen("LGP7071.in", "r", stdin);
    // freopen("LSP7071.out", "w", stdout);
    int n, a[1023], i, ans[1023], k = 0, intans;
    memset(a, -1, sizeof(a));
    memset(ans, -1, sizeof(ans));
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "-1\n";
        return 0;
    }
    for (i = 1; n != 0; i++)
    {
        a[i] = n % 2;
        n /= 2;
        k++;
    }
    for (i = 1; i <= k; i++)
        ans[i] = a[k - i + 1];
    for (i = 1; i < k; i++)
    {
        intans = pow(ans[i] * 2, k - i);
        if (intans != 0)
            cout << intans << " ";
    }
    cout << endl;
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
