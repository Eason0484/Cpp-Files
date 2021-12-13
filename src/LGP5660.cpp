#include <iostream>
using namespace std;
int main()
{
    char a[9];
    int i, ans = 0;
    for (i = 1; i <= 8; i++)
        cin >> a[i];
    for (i = 1; i <= 8; i++)
        if (a[i] == '1')
            ans++;
    cout << ans << endl;
    return 0;
}
