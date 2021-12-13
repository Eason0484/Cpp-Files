#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    freopen("title.in", "r", stdin);
    freopen("title.out", "w", stdout);
    string s;
    cin >> s;
    int l, ans, i;
    l = s.length();
    for (i = 0; i < l; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            ans++;
        if (s[i] >= '0' && s[i] <= '9')
            ans++;
        if (s[i] >= 'A' && s[i] <= 'Z')
            ans++;
    }
    cout << ans << endl;
    return 0;
}
