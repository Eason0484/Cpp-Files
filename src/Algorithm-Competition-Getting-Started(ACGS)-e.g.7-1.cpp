#include <algorithm>
#include <iostream>
using namespace std;
bool j(int x, int y)
{
    if (x >= 100000 || y >= 100000)
        return 0;
    int v[11], i, a[11];
    v[1] = x % 100000 / 10000;
    v[2] = x % 10000 / 1000;
    v[3] = x % 1000 / 100;
    v[4] = x % 100 / 10;
    v[5] = x % 10 / 1;
    v[6] = y % 100000 / 10000;
    v[7] = y % 10000 / 1000;
    v[8] = y % 1000 / 100;
    v[9] = y % 100 / 10;
    v[10] = y % 10 / 1;
    for (i = 1; i <= 10; i++) // TODO:Correct it
        a[v[i]]++;
    for (i = 1; i <= 10; i++)
        if (a[i] != 1)
            return 0;
    return 1;
}
int main()
{
    int n, a, b, v[11];
    cin >> n;
    for (b = 0; b < 100000; b++)
    {
        a = b * n;
        v[1] = a % 100000 / 10000;
        v[2] = a % 10000 / 1000;
        v[3] = a % 1000 / 100;
        v[4] = a % 100 / 10;
        v[5] = a % 10 / 1;
        v[6] = b % 100000 / 10000;
        v[7] = b % 10000 / 1000;
        v[8] = b % 1000 / 100;
        v[9] = b % 100 / 10;
        v[10] = b % 10 / 1;
        if (j(a, b) == 0)
            continue;
        else
            cout << v[1] << v[2] << v[3] << v[4] << v[5] << " / " << v[6] << v[7] << v[8] << v[9] << v[10] << " = " << n << endl;
    }
    system("pause");
    return 0;
}
