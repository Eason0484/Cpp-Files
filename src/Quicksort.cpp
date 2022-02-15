#include <iostream>
using namespace std;
int a[1000];
void quickSort(int, int);
int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    quickSort(1, n);
    for (i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}
void quickSort(int left, int right)
{
    int i = left, j = right, m = a[(left + right) / 2], temp;
    if (left >= right)
        return;
    do
    {
        while (a[j] > m)
            j--;
        while (a[i] < m)
            i++;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
            i--;
        }
    } while (i <= j);
    if (left < j)
        quickSort(left, j);
    if (right > i)
        quickSort(i, right);
    return;
}
