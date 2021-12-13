#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
void qsort(int a[], int l, int r)
{
    int i = l, j = r, flag = a[(l + r) / 2];
    do {
        while (a[i] < flag)
            i++;
        while (a[j] > flag)
            j--;
        if (i <= j) {
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
    int a[1024] = { 0 }, k, i;
    char ac[1024];
    scanf("%d", &k);
    scanf("%s", ac);
    for (i = 0; i != '\0'; i++)
        a[i] = ac[i] - '0';
    qsort(a, 0, 1023);
    printf("%d", a[k]);
    return 0;
}
