#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a[100], i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
