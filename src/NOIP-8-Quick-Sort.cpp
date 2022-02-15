#include <cstdio>
#include <iostream>
using namespace std;
void qsort(int a[], int l, int r)
{
    int i = l, j = r, flag = a[(l + r) / 2];
    do
    {
        while (a[i] < flag)
            i++;
        while (a[j] > flag)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (i < r)
        qsort(a, i, r);
    if (j > l)
        qsort(a, l, j);
}
int main()
{
    int a[100], i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, 0, n - 1);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
