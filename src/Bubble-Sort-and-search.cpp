#include <iostream>
using namespace std;
int main()
{
    int i, k, n, jilu = 0, mid, low = 1, high, exchanger, j;
    cin >> n >> k;
    high = n - 1;
    int input[n];
    for (i = 0; i < n; i++)
        cin >> input[i];
    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            if (input[j] > input[j + 1]) {
                exchanger = input[j];
                input[j] = input[j + 1];
                input[j + 1] = exchanger;
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << input[i] << " ";
    while (low <= high) {
        mid = (low + high) / 2;
        if (input[mid] > k)
            high = mid;
        if (input[mid] < k)
            low = mid;
        if (input[mid] == k) {
            jilu = mid + 1;
            break;
        }
    }
    if (jilu == 0)
        cout << "No\n";
    else
        cout << endl
             << jilu << endl;
    return 0;
}
