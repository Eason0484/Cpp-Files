#include <cstdio>
#include <iostream>
using namespace std;
int p(int a)
{
    if (a == 1 || a == 0)
        return 1;
    return p(a - 1) * a;
}
int main()
{
    int a, ans;
    scanf("%d", &a);
    ans = p(a);
    printf("%d\n", ans);
    return 0;
}
