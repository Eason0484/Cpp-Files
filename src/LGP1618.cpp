#include <cstring>
#include <iostream>
int b[10];
void go(int x)
{
    b[x % 10] = 1;
    b[x / 10 % 10] = 1;
    b[x / 100] = 1;
}
bool check(int x, int y, int z)
{
    memset(b, 0, sizeof(b));
    if (y > 999 || z > 999)
        return 0;
    go(x), go(y), go(z);
    for (int i = 1; i <= 9; i++)
        if (!b[i])
            return 0;
    return 1;
}
using namespace std;
int main()
{
    long long A, B, C, x, y, z, cnt = 0;
    cin >> A >> B >> C;
    for (x = 123; x <= 987; x++)
    {
        if (x * B % A || x * C % A)
            continue;
        y = x * B / A;
        z = x * C / A;
        if (check(x, y, z))
        {
            printf("%lld %lld %lld\n", x, y, z);
            cnt++;
        }
    }
    if (!cnt)
        cout << "No!!!\n";
    return 0;
}
