#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
struct student {
    string name;
    int c, m, e;
};
int main()
{
    student a[1001];
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        cin >> a[i].name >> a[i].c >> a[i].m >> a[i].e;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i < j && abs(a[i].c - a[j].c) <= 5 && abs(a[i].m - a[j].m) <= 5 && abs(a[i].e - a[j].e) <= 5 && abs(a[i].c + a[i].m + a[i].e - a[j].c - a[j].m - a[j].e) <= 10)
                cout << a[i].name << " " << a[j].name << endl;
        }
    }
    system("pause");
    return 0;
}
