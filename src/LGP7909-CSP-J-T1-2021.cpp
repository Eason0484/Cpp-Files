#include <iostream>
using namespace std;
int main()
{

    int n, L, R, i, tmp = 0, ans = 0;

    cin >> n >> L >> R;

    for (i = L; i <= R; i++)
    { //求余，取所有得数最大值
        tmp = i % n;
        if (tmp >= ans)
        {
            ans = tmp;
        }
    }
    cout << ans << endl;

    return 0;
}
