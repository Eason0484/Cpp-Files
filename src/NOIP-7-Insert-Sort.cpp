#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a[100], i, j, n, now;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i < n; i++)
    {
        now = a[i];
        for (j = i - 1; j >= 0; j--)
            if (a[j] > now)
                a[j + 1] = a[j];
            else
                break;
        a[j + 1] = now;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
