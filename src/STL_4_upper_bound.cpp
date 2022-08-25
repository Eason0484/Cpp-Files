// upper_bound

#include <algorithm>
#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;
    int n, x[1005], q, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> m;
        int ans = upper_bound(x, x + n, m) - x;
        cout << ans << endl;
    }
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
