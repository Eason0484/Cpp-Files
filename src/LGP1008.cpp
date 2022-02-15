#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int a[10], i, j, v[10], bool1;
    for (i = 192; i <= 333; i++)
    {
        memset(v, 0, sizeof(v));
        bool1 = 1;
        a[1] = i / 100;
        a[2] = i / 10 % 10;
        a[3] = i % 10;
        a[4] = i * 2 / 100;
        a[5] = i * 2 / 10 % 10;
        a[6] = i * 2 % 10;
        a[7] = i * 3 / 100;
        a[8] = i * 3 / 10 % 10;
        a[9] = i * 3 % 10;
        for (j = 1; j <= 9; j++)
            v[a[j]]++;
        for (j = 1; j <= 9; j++)
        {
            if (v[j] != 1)
            {
                bool1 = 0;
                break;
            }
        }
        if (bool1 == 1)
            cout << a[1] << a[2] << a[3] << " " << a[4] << a[5] << a[6] << " " << a[7] << a[8] << a[9] << endl;
    }
    system("pause");
    return 0;
}
