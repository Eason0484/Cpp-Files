#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char w[100];
    int i, maxn, minn, cnt[26] = {0}, delta, l;
    cin >> w;
    l = strlen(w);
    for (i = 0; i < l; i++)
    {
        cnt[w[i] - 'a']++;
    }
    maxn = 0;
    minn = 10000;
    for (i = 0; i < 26; i++)
    {
        if (cnt[i] > maxn)
            maxn = cnt[i];
        if (cnt[i] != 0 && cnt[i] < minn)
            minn = cnt[i];
    }
    delta = maxn - minn;
    if (delta == 0 || delta == 1)
    {
        cout << "No Answer\n0\n";
        return 0;
    }
    for (i = 2; i * i <= delta; i++)
    {
        if (delta % i == 0)
        {
            cout << "No Answer\n0\n";
            return 0;
        }
    }
    cout << "Lucky Word\n"
         << delta << "\n";
    return 0;
}
