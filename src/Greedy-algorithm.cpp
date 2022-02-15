#include <iostream>
using namespace std;
int main()
{
    const int N = 6;
    int c[N] = {};
    int v{N} = {1, 5, 10, 20, 50, 100};
    int k, m = 0;
    int i;
    int cc = 0;
    int r[6] = {1, 5, 10, 20, 50, 100}, c[6], k, i, m, sum[6], j, rtn = 0;
    cin >> k;
    for (i = 0; i < 6; i++)
        cin >> c[i];
    for (i = 0; i < 6; i++)
        sum[i] = c[i];
    for (i = 5; i >= 0; i--)
    {
        for (j = 0; j < sum[i]; j++)
        {
            if (k >= sum[i])
            {
                c[i] -= 1;
                k -= r[i];
                m += 1;
            }
            if (c[i] == 0)
                break;
            if (k == 0)
                break;
        }
        if (k == 0)
            break;
    }
    for (i = 0; i < 6; i++)
    {
        if (c[i] < 0)
            rtn = 1;
    }
    if (rtn == 1)
        cout << "No\n";
    else
        cout << m << endl;
    return 0;
}
