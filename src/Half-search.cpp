#include <iostream>
using namespace std;
int main()
{
    int i, k, n, jilu = 0, mid, low = 1, high;
    cin >> n >> k;
    high = n;
    int a[n];
    for (i = 1; i <= n; i++)
        cin >> a[i];
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] > k)
            high = mid;
        if (a[mid] < k)
            low = mid;
        if (a[mid] == k) {
            jilu = mid;
            break;
        }
    }
    if (jilu == 0)
        cout << "No\n";
    else
        cout << jilu << endl;
    return 0;
}
