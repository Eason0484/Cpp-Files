#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a[1023] = { 0 }, i, n, k = 0, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j && i < j && a[i] == a[j])
                k++;
        }
    }
    sort(a, a + n);
    unique(a, a + n);
    printf("%d\n", n - k);
    for (i = 0; i < n - k; i++)
        printf("%d ", a[i]);
    return 0;
}
