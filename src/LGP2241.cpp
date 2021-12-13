#include <iostream>
using namespace std;
int main()
{
    int m, n;
    long long x, y, ansrec = 0, anssqu = 0;
    cin >> n >> m; //n*m
    for (x = 0; x <= n; x++) {
        for (y = 0; y <= m; y++) {
            long long tmp = min(x, y);
            anssqu += tmp;
            ansrec += x * y - tmp;
        }
    }
    cout << anssqu << " " << ansrec << endl;
    system("pause");
    return 0;
}
