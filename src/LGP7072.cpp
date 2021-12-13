#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n, w, sum, a[10001], i, tmp, j;
    cin >> n >> w;
    for (i = 1; i <= n; i++) {
        cin >> tmp;
        a[tmp]++;
        sum = 0;
        for (j = 600; j >= 0; j--) {
            sum += a[j];
            if (sum >= max(1, i * w / 100)) {
                cout << j << " ";
                break;
            }
        }
    }
    return 0;
}
