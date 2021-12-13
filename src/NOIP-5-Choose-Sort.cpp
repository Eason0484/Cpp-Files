#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a[1000], i, j, m;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m - 1; i++)
        for (j = i + 1; j < m; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
    for (i = 0; i < m; i++)
        printf("%d ", a[i]);
    return 0;
}
