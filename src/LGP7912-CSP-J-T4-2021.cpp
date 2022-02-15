#include <bits/stdc++.h>
#define N 200009
#define INF 0x3f3f3f3f3f3f3f3f
using namespace std;
typedef long long ll;
inline ll read()
{
    ll x = 0, f = 1;
    char c = getchar();
    while (!isdigit(c))
    {
        if (c == '-')
            f = -1;
        c = getchar();
    }
    while (isdigit(c))
    {
        x = x * 10 + c - '0', c = getchar();
    }
    return x * f;
}
ll n, a[N], son[N], nxt[N], pre[N], Son[N], cnt, p[N], tot = 1;
void init()
{
    n = read();
    a[0] = a[n + 1] = -1;
    for (int i = 1; i <= n; i++)
        a[i] = read(), nxt[i] = i + 1, pre[i] = i - 1;
    for (int i = 1; i <= n; i++)
        if (a[i] == a[i - 1])
            son[i - 1] = i;
        else
            Son[++cnt] = i;
}
void get()
{
    while (tot)
    {
        tot = 0;
        for (int i = 1; i <= cnt; i++)
        {
            if (Son[i] == 0)
                continue;
            p[++tot] = Son[i];
            nxt[pre[Son[i]]] = nxt[Son[i]];
            pre[nxt[Son[i]]] = pre[Son[i]];
            if (son[Son[i]] != 0)
                Son[i] = son[Son[i]];
            else
                Son[i] = 0;
        }
        for (int i = 1; i <= cnt; i++)
            if (Son[i] == 0)
                swap(Son[i], Son[cnt]), cnt--;
        for (int i = 1; i <= cnt; i++)
        {
            if (Son[i] == 0)
                continue;
            if (a[pre[Son[i]]] == a[Son[i]])
                son[pre[Son[i]]] = Son[i], Son[i] = 0;
        }
        if (tot == 0)
            break;
        sort(p + 1, p + tot + 1);
        for (int i = 1; i < tot; i++)
            printf("%lld ", p[i]);
        printf("%lld\n", p[tot]);
    }
}
int main()
{
    // freopen("fruit.in","r",stdin);
    // freopen("fruit.out","w",stdout);
    init();
    get();
    system("pause");
    return 0;
    // fclose(stdin);
    // fclose(stdout);
}
