#include <algorithm>
#include <iostream>

struct Test
{
    int x, y;
} a[101];

bool cmp(Test, Test);

int main(int argc, char **argv)
{
    using namespace std;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].x << " " << a[i].y << endl;
    }
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

bool cmp(Test a, Test b)
{
    if (a.x == b.x)
    {
        return a.y < b.y;
    }
    return a.x < b.x;
}
